//Author: Muhammad Ali
//Lab#6
//Linked List Combine
#include <iostream>
#include "linked_list.h"

using namespace std;
//=========================== Constructor ===========================//
linked_list::linked_list() {
    head_ptr = NULL;
    previous_ptr = NULL;
}
//=========================== Insert To Head ========================//
void linked_list::insert(node::value_type entry) {
    list_head_insert(head_ptr, entry);
}
//=========================== Insert While Merging ==================//
void linked_list::merge_insert(node::value_type entry) {
    list_merge_insert(head_ptr, previous_ptr, entry);
}
//=========================== Remove Duplicates =====================//
void linked_list::remove_duplicates(node*& head_ptr) {
    node* n = head_ptr;
    while (n != NULL)
    {
        double datum = n -> data();
        node* prev = n;
        node* temp = n -> link();
        while (temp != NULL)
        {
            if (temp ->data() == datum)
            {
                list_remove (prev);
                temp = prev -> link();
            }
            else
            {
                prev = temp;
                temp = temp -> link();
            }
        }
        n = n -> link();
    }
}
//=========================== Print List ============================//
ostream& operator << (ostream& output, const linked_list l)
{
    const node* n = l.head_ptr;
    while (n != NULL)
    {
        output << n -> data() << " ";
        n = n -> link();
    }
    return output;
}
//=========================== Merge List ============================//
linked_list mergeLists(linked_list l1, linked_list l2) {
    linked_list l3;
    while (l1.head_ptr != NULL && l2.head_ptr != NULL) {
        /*if both head_ptrs are same insert one and move both pointers*/
        if (l1.head_ptr->data() == l2.head_ptr->data()) {
            l3.merge_insert(l1.head_ptr->data());
            l1.head_ptr = l1.head_ptr->link();
            l2.head_ptr = l2.head_ptr->link();
        }
            /*otherwise check which one is smaller and insert that and move it's pointer*/
        else if (l1.head_ptr->data() < l2.head_ptr->data()) {
            l3.merge_insert(l1.head_ptr->data());
            l1.head_ptr = l1.head_ptr->link();
        }
        else {
            l3.merge_insert(l2.head_ptr->data());
            l2.head_ptr = l2.head_ptr->link();
        }
    }
    if (l1.head_ptr == NULL) {
        while (l2.head_ptr != NULL) {
            l3.merge_insert(l2.head_ptr->data());
            l2.head_ptr = l2.head_ptr->link();
        }
    }
    else if (l2.head_ptr == NULL) {
        while (l1.head_ptr != NULL) {
            l3.merge_insert(l1.head_ptr->data());
            l1.head_ptr = l1.head_ptr->link();
        }
    }
    return l3;
}