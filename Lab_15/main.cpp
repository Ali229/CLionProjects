//Author: Muhammad Ali
//Lab# 15
//Graph Using Set

#include <iostream>
#include "graph.h"
using namespace std;
using namespace main_savitch_15;
void printSet(set<size_t> s) {
    cout<< "{"<<endl;
    for (std::set<size_t>::iterator i = s.begin(); i != s.end(); i++) {
        cout<< "\t" <<*i<<endl;
    }
    cout<<"}"<< endl;
}
int main() {
    graph<string> *g1 = new graph<string>();
    g1->add_vertex("Seattle"); //0
    g1->add_vertex("San Francisco"); //1
    g1->add_vertex("Los Angeles"); //2
    g1->add_vertex("Denver"); //3
    g1->add_vertex("Kansas City"); //4
    g1->add_vertex("Chicago"); //5
    g1->add_vertex("Boston"); //6
    g1->add_vertex("New York"); //7
    g1->add_vertex("Costa Rica"); //8
    g1->add_edge(0,5);g1->add_edge(0,3);g1->add_edge(0,1);
    g1->add_edge(1,3);g1->add_edge(1,2);
    g1->add_edge(2,3);g1->add_edge(2,4);
    g1->add_edge(3,5);g1->add_edge(3,4);
    g1->add_edge(4,5);g1->add_edge(4,7);
    g1->add_edge(5,6);g1->add_edge(5,7);
    g1->add_edge(6,7);
    g1->remove_edge(0,3);
    cout<<g1->labels[1]<<endl;
    assert(g1->is_edge(0,5));
    set<size_t> s1 = g1->neighbors(0);
    printSet(s1);
    std::cout << "All Tests Passed!" << std::endl;
    return 0;
}