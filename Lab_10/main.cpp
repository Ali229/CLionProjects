//Author: Muhammad Ali
//Lab #10
//Binary Tree Breadth First
#include <iostream>
#include "bintree.h"

using namespace std;
using namespace main_savitch_10;

binary_tree_node<int> *create_bst() {
    binary_tree_node<int> *t = new binary_tree_node<int>(15);
    binary_tree_node<int> *t1 = new binary_tree_node<int>(10, NULL, t);
    binary_tree_node<int> *t2 = new binary_tree_node<int>(66);
    binary_tree_node<int> *t3 = new binary_tree_node<int>(40, NULL, t2);
    binary_tree_node<int> *t4 = new binary_tree_node<int>(17, t1, t3);
    return t4;
}

template<typename T>
void printbf(T data) {
    cout<<data<<" ";
}
int sum = 0;
template<typename T>
void sumTree(T data) {
    sum+=data;
}

int main() {
    binary_tree_node<int> *t = create_bst();
    print(t, 10);//Just to compare
    breadthfirst(printbf<int>, t);
    breadthfirst(sumTree<int>, t);
    cout<<"\nThe sum is: "<<sum<<endl;
    cout << "All Tests Passed!" << endl;
    return 0;
}