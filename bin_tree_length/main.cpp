#include <iostream>
#include "bintree.h"
using namespace std;
using namespace main_savitch_10;
void createTree() {


}
template <class Item>
unsigned int path_length(binary_tree_node<Item>* root, const Item& target) {
    unsigned int path = 0;
    binary_tree_node<Item> *cursor = root;
    if (cursor == NULL) {
        return -1;
    }
    if (cursor->data() == target) {
        return 0;
    }
    while (cursor!=NULL && cursor->data() != target) {
        if (target<cursor->data()) {
            path++;
            cursor = cursor ->left();

        }
        else if (target>cursor->data()) {
            path++;
            cursor = cursor->right();

        }
        if (target == cursor->data()) {
            return path;
        }
    }
    return -1;


}
int main() {
    binary_tree_node<int> *b0 = new binary_tree_node<int>(0);
    binary_tree_node<int> *bb = new binary_tree_node<int>(1, b0, NULL);
    binary_tree_node<int> *bc = new binary_tree_node<int>(3);
    binary_tree_node<int> *b = new binary_tree_node<int>(2, bb, bc);
    binary_tree_node<int> *b1 = new binary_tree_node<int>(5);
    binary_tree_node<int> *b2 = new binary_tree_node<int>(4,b,b1);
    binary_tree_node<int> *b3 = new binary_tree_node<int>(10,b2,NULL);
    print(b3, 0);
    cout<< path_length(b3, 4)<<endl;
    return 0;
}