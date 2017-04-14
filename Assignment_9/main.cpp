//Author: Muhammad Ali
//Assignment #9
//Binary Tree Print By Level

#include <iostream>
#include "bintree.h"

using namespace main_savitch_10;
using namespace std;

binary_tree_node<int> *create_bst() {
    binary_tree_node<int> *t = new binary_tree_node<int>(15);
    binary_tree_node<int> *t1 = new binary_tree_node<int>(10, NULL, t);
    binary_tree_node<int> *t5 = new binary_tree_node<int>(65);

    binary_tree_node<int> *t2 = new binary_tree_node<int>(66, t5, NULL);
    binary_tree_node<int> *t3 = new binary_tree_node<int>(40, NULL, t2);
    binary_tree_node<int> *t4 = new binary_tree_node<int>(17, t1, t3);
    return t4;
}

int depth(binary_tree_node<int> *n) {
    if (n == NULL) return 0;
    else {
        int left = depth(n->left());
        int right = depth(n->right());
        if (left > right) return left+1;
        else return right+1;
    }
}

void printRow(binary_tree_node<int> *n, int level) {
    if (n == NULL) {
        cout << "NULL ";
        return;
    }
    if (level == 1) {
        cout << n->data() << " ";
    } else {
        printRow(n->left(), level - 1);
        printRow(n->right(), level - 1);
    }
}

int main() {
    binary_tree_node<int> *t = create_bst();
    print(t,0);
    cout<< "\n\n";
    int n = depth(t);
    cout << n<< endl;
    for (int i = 1; i <= n; ++i) {
        printRow(t, i);
        cout << endl;
    }
    return 0;
}