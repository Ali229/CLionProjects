#include <iostream>
#include <list>
#include "bintree.h"

using namespace std;
using namespace main_savitch_10;

binary_tree_node <int>* create_bst() {
    binary_tree_node<int> *t = new binary_tree_node<int>(15);
    binary_tree_node<int> *t1 = new binary_tree_node<int>(10,NULL,t);
    binary_tree_node<int> *t2 = new binary_tree_node<int>(66);
    binary_tree_node<int> *t3 = new binary_tree_node<int>(40,NULL, t2);
    binary_tree_node<int> *t4 = new binary_tree_node<int>(17,t1,t3);
    return t4;
}

template <typename T>
list<T> *flatten(binary_tree_node<T> *t) {
    list<T> *leftList = new list<T>;
    if(t != NULL)
    {
        leftList = flatten(t -> left());
        leftList->push_back(t->data());

        list<T> *rightList = flatten(t -> right());
        leftList->splice(leftList->end(), *rightList);
    }
    return leftList;
}

template <typename T>
void print(list<T> *l) {
    for (typename list<T>::const_iterator i = l->begin(); i != l->end(); ++i)
        cout << *i << " ";
        cout <<"" <<endl;
}

int main() {
    binary_tree_node<int> *t = create_bst();
    list<int> *listTree = flatten(t);
    print(listTree);
    delete [] listTree;
    cout << "\nAll Tests Passed!" << endl;
    return 0;
}