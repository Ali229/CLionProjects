//Author: Muhammad Ali
//Lab#6
//Linked List Combine
#ifndef LAB_6_LINKED_LIST_H
#define LAB_6_LINKED_LIST_H

#include "node1.h"  // Provides node class

using namespace std;

class linked_list {
public:
    //void operator <();
    //void operator ==();
    linked_list();
    void insert(node::value_type entry);
    void merge_insert(node::value_type entry);
    void remove_duplicates(node *&head_ptr);
    friend ostream &operator<<(ostream &output, const linked_list l);
    node *head_ptr;
    node *previous_ptr;
};
linked_list mergeLists(linked_list l1, linked_list l2);

#endif //LAB_6_LINKED_LIST_H
