//Author: Muhammad Ali
//Lab# 11
//Priority Queue Using Max Heap

#ifndef LAB_11_HEAP_H
#define LAB_11_HEAP_H
#include <iostream>
#include <vector>
#include <cassert>

// This class implements an unbounded max heap.
// class invariant: heap property is satisfied for a max heap
using namespace std;
template <typename T>
class heap
{
public:
    heap();
    // postcondition: empty heap has been created
    size_t  size() const;
    // postcondition: number of elements in a heap has been returned
    bool is_empty() const;
    // postcondtion: returned whether the heap is empty
    void insert (const T& item);
    // postcondition: item has been added
    void remove();
    // precondition: heap is not empty
    // postcondition: largest item has been removed from the heap
    T max() const;
    // precondition: heap is not empty
    // postcondition: copy of largest element in the heap has been returned
    T& max();
    // precondition: heap is not empty
    // postcondition: access to largest element in the heap has been returned
private:
    std::vector<T> v;
    size_t max_child (size_t index) const;
    // precondition: element at index has children
    // postcondition: index of the larger child has been returned
    // if there is only 1 child - index of that child has been returned
};

#include "heap.template"

#endif //LAB_11_HEAP_H