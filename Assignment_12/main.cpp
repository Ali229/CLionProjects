//Author: Muhammad Ali
//Assignment# 12
//Social Network Graph
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "graph.h"
using namespace main_savitch_15;

void tokenize (const string& s, string& first, string& second)
{
    stringstream ss (s);
    ss >> first;
    ss >> second;
}

size_t get_index (const graph<string>& g, const string& target)
{
    size_t x;
    bool found=false;
    for(x=0;x<g.size();x++){
        if(g[x].compare(target) == 0){
            found=true;
            break;
        }
    }
    assert(found);
    return x;
}


graph<string>* create_graph (const string& file_name)
{
    graph<string>* g = new graph<string>;
    ifstream input(file_name.c_str());
    size_t num;
    input >> num;
    string temp;
    getline (input, temp);
    assert (num <= g -> MAXIMUM);
    string* names = new string[num];
    for (size_t i = 0; i < num; ++i)
    {
        string s;
        getline (input, s);
        names[i] = s;
        g -> add_vertex (s);
    }
    string line;
    while (getline (input, line) >0)
    {
        string first, second;
        tokenize (line, first, second);
        g -> add_edge (get_index (*g, first), get_index (*g, second));
    }
    input.close();
    return g;
}
//list all the friends of the friends of a specified person
set<string> friends (const graph<string>& network, const string& name) {
    set<string> fs;//Set of Friends
    set<size_t> n = network.neighbors(get_index(network,name));//Neighbours
    for (set<size_t>::iterator i = n.begin(); i != n.end() ; ++i) {
        fs.insert(network[*i]);
    }
    return fs;

}
void printSet(set<string> s) {
    cout<< "{"<<endl;
    for (std::set<string>::iterator i = s.begin(); i != s.end(); i++) {
        cout<< "\t" <<*i<<endl;
    }
    cout<<"}"<< endl;
}
//list all the friends that 2 specified people have in common
set<string> common_friends (const graph<string>& network, const string& name1, const string& name2){
    set<string> fs;//Set of Common Friends
    set<string> n=friends(network,name1);
    set<string> n2=friends(network,name2);
    set_intersection (n.begin(), n.end(), n2.begin(), n2.end(),inserter(fs,fs.begin()));
    return fs;
}
//list all the friends of the friends of a specified person
set<string> friends_of_friends ( const graph<string>& network, const string& my_name) {
    set<string> fs;//Set of friends of friends
    set<string> n=friends(network, my_name);//friends
    set<string> n2;
    for (set<string>::iterator i = n.begin(); i != n.end() ; ++i) {
        n2=friends(network,*i);//friends of friends
        fs.insert(n2.begin(), n2.end());
    }
    return fs;
}
//adding a friend
void add_friend (graph<string>& network, const string& my_name, const string& new_friend) {
    network.add_edge(get_index(network, my_name), get_index(network, new_friend));
}
//removing a friend
void remove_friend (graph<string>& network, const string& my_name, const string& ex_friend) {
    network.remove_edge(get_index(network, my_name), get_index(network, ex_friend));
}
//determine whether someone is a friend
bool is_friend (const graph<string>& network, const string& my_name, const string& maybe_friend) {
    return network.is_edge(get_index(network, my_name), get_index(network,maybe_friend));
}

int main() {
    graph<string> *g = create_graph("data.txt");

    cout<< "===== Printing Friends of Bob ====="<<endl;
    set<string>s = friends(*g, "Bob");
    printSet(s);

    cout<< "===== Printing Common Friends of John And Ali ====="<<endl;
    set<string>s2 = common_friends(*g, "John","Ali");
    printSet(s2);

    cout<< "===== Printing Friends of Friends of Ali ====="<<endl;
    set<string>s3 = friends_of_friends(*g,"Ali");
    printSet(s3);

    assert(!is_friend(*g, "Bob" , "Xalika"));
    add_friend(*g, "Xalika" , "Bob");
    assert(is_friend(*g, "Xalika" , "Bob"));

    remove_friend(*g, "Ali" , "Zac");
    assert(!is_friend(*g, "Ali" , "Zac"));

    assert(is_friend(*g,"Ali", "Bob"));
    std::cout << "All Tests Passed!" << std::endl;
    return 0;
}