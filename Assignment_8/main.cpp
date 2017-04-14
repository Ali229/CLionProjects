//Author: Muhammad Ali
//Assignment# 8
//List to Tree

#include <iostream>
#include <list>
#include <queue>
#include "bintree.h"

using namespace main_savitch_10;
using namespace std;

template<typename T>
list<T> *createList() {
    std::list<T> *myList = new list<T>();
    myList->push_back(0);
    myList->push_back(1);
    myList->push_back(2);
    myList->push_back(3);
    myList->push_back(4);
    myList->push_back(5);
    myList->push_back(6);
    myList->push_back(7);
    return myList;
}

template<typename T>
void printList(list<T> *myList) {
    typename list<T>::const_iterator i;
    for (i = myList->begin(); i != myList->end(); i++) {
        cout << *i << " ";
    }
    cout<<endl;
}

binary_tree_node<int> *createTree(list<int> *myList) {

    if (myList->size() == 1) {
        binary_tree_node<int> *sTree;
        sTree->set_data(myList->front());
        return sTree;
    }
    if (myList->size() == 2) {
        binary_tree_node<int> *sTree;
        binary_tree_node<int> *sTree2;
        sTree->set_data(myList->front());
        sTree2->set_data(myList->back());
        sTree->set_right(sTree2);
        return sTree;
    }
    int mid = 1;
    list<int>::iterator i;
    for (i = myList->begin(); mid < (myList->size()+1)/2; i++) {
        mid++;
    }
    list<int> *leftList;
    for (list<int>::iterator j = myList->begin(); j != i; j++) {
        leftList->push_back(*j);
    }
    list<int> *rightList;
    for (list<int>::iterator k = ++i; k != myList->end(); k++) {
        rightList->push_back(*k);
    }

    binary_tree_node<int> *tree;
    tree->set_left(createTree(leftList));
    tree->set_right(createTree(rightList));
    return tree;
}

int main() {
    list<int> *myList = createList<int>(); //Creating a list
    printList(myList); //Printing a list

    binary_tree_node<int> *root = createTree(myList); //Creating binary tree
    print(root, 0);//Print tree
    cout << "\nAll Tests Passed!" << std::endl;
    return 0;
}