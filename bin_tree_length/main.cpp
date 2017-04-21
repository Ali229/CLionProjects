#include <iostream>
#include "bintree.h"
using namespace std;
using namespace main_savitch_10;
string checkLower() {
    //code to check for lowercase
    binary_tree_node<char>* node1 = new binary_tree_node<char>('c');
    if (islower(node1->data())) {
        return "YES IT IS LOWER CASE LETTER";
    }
}
int num_even(const binary_tree_node<int>* node) {
    if (node == NULL) {
        return 0;
    }
    int ans = 0;
    if (node->data()%2 == 0) {
        ans = 1;
    }

    return ans+num_even(node->left()) + num_even(node->right());
}
template <class Item>
unsigned int path_length(binary_tree_node<Item>* root, const Item& target) {
    assert(root != NULL);
    unsigned int path = 0;
    binary_tree_node<Item> *cursor = root;
    if (cursor == NULL) {
        return -1;
    }
    if (cursor->data() == target) {
        return 0;
    }
    while (cursor != NULL && cursor->data() != target) {
        if (target < cursor->data()) {
            path++;
            cursor = cursor->left();

        } else if (target > cursor->data()) {
            path++;
            cursor = cursor->right();

        }
        if (target == cursor->data()) {
            return path;
        }
    }
    return -1;
}
bool similar(binary_tree_node<int>* root1, binary_tree_node<int>* root2) {
    /*1. both empty */
    if (root1==NULL && root2==NULL)
        return 1;

    /* 2. both non-empty -> compare them */
    if (root1!=NULL && root2!=NULL)
    {
        return
                (
                        root1->data() == root2->data() &&
                        similar(root1->left(), root2->left()) &&
                        similar(root1->right(), root2->right())
                );
    }

    /* 3. one empty, one not -> false */
    return 0;
}
int main() {
    binary_tree_node<int> *b0 = new binary_tree_node<int>(0);
    binary_tree_node<int> *bb = new binary_tree_node<int>(1, b0, NULL);
    binary_tree_node<int> *bc = new binary_tree_node<int>(3);
    binary_tree_node<int> *b = new binary_tree_node<int>(2, bb, bc);
    binary_tree_node<int> *bd = new binary_tree_node<int>(5);
    binary_tree_node<int> *b2 = new binary_tree_node<int>(4,b,bd);
    binary_tree_node<int> *b3 = new binary_tree_node<int>(10,b2,NULL);

    binary_tree_node<int> *b01 = new binary_tree_node<int>(0);
    binary_tree_node<int> *bb1 = new binary_tree_node<int>(1, b01, NULL);
    binary_tree_node<int> *bc1 = new binary_tree_node<int>(3);
    binary_tree_node<int> *b1 = new binary_tree_node<int>(2, bb1, bc1);
    binary_tree_node<int> *bd1 = new binary_tree_node<int>(5);
    binary_tree_node<int> *b21 = new binary_tree_node<int>(4,b1,bd1);
    binary_tree_node<int> *b31 = new binary_tree_node<int>(10,b21,NULL);
    //print(b3, 0);
    //cout<< path_length(b3, 0)<<endl;
    cout<< num_even(b3) <<endl;
    cout<<similar(b3, b31) <<endl;
    cout<< checkLower()<<endl;
    return 0;
}