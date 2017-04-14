#include <iostream>
#include "linked_list.h"

using namespace std;
int main() {
    //=========================== Creating 1st List =================//
    linked_list l1;
    l1.insert(20);
    l1.insert(15);
    l1.insert(14);
    l1.insert(12);
    l1.insert(10);
    l1.insert(9);
    l1.insert(9);
    l1.insert(6);
    l1.insert(5);
    l1.insert(3);
    l1.insert(2);
    l1.insert(1);
    l1.remove_duplicates(l1.head_ptr);
    cout << l1 << endl;
    //=========================== Creating 2nd List =================//
    linked_list l2;
    l2.insert(14);
    l2.insert(10);
    l2.insert(6);
    l2.insert(6);
    l2.insert(5);
    l2.insert(0);
    l2.remove_duplicates(l2.head_ptr);
    cout << l2 << endl;
    //=========================== Merging Lists =====================//
    linked_list l3  = mergeLists(l1,l2);
    cout << l3 << endl;
    return 0;
}

