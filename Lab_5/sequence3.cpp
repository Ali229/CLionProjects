//Author:Muhammad Ali
//Lab#5
//Sequence List

#include <assert.h>
#include "sequence3.h"
using namespace  main_savitch_5;
sequence::sequence() {
    head_ptr = NULL;
    tail_ptr = NULL;
    precursor = NULL;
    cursor = head_ptr;
    many_nodes = 0;
}

sequence::sequence(const sequence& source) {
    size_type index = 1;
    for(cursor= source.head_ptr; cursor!=source.cursor; cursor = cursor->link()) {
        index++;
    }
    list_copy(source.head_ptr, head_ptr, tail_ptr);
    cursor = list_locate(head_ptr, index);
    if (index == 1) {
        precursor = NULL;
    } else {
        precursor = list_locate(head_ptr, index - 1);
    }
    many_nodes = source.many_nodes;
}

sequence::~sequence() {
    list_clear(head_ptr);
    many_nodes = 0;
}

void sequence::start() {
    cursor = head_ptr;
}

void sequence::advance() {
    assert(is_item());
    precursor = cursor;
    cursor = cursor->link();
}

void sequence::insert(const value_type &entry) {
    if (head_ptr == NULL) /*when list is empty*/{
        list_head_insert(head_ptr,entry);
        cursor = head_ptr;
        precursor = NULL;
    } else if (cursor == NULL || cursor == head_ptr) /*when end of the list or list is not empty or */{
        list_head_insert(head_ptr,entry);
        cursor = head_ptr;
    } else /*When the list is not empty or at the end*/{
        list_insert(precursor,entry);
        cursor = precursor->link();
    }
    ++many_nodes;
}

void sequence::attach(const value_type &entry) {
    if (head_ptr == NULL) /*when list is empty*/{
        list_head_insert(head_ptr,entry);
        cursor = head_ptr;
        tail_ptr = head_ptr;
        precursor = NULL;
    } else if (cursor == NULL || cursor == tail_ptr) /*when end of the list or list is not empty or */{
        list_insert(tail_ptr,entry);
        precursor = tail_ptr;
        tail_ptr = tail_ptr->link();
        cursor = tail_ptr;
    } else /*When the list is not empty or not at the end*/{
        list_insert(cursor,entry);
        precursor = cursor;
        cursor = cursor->link();
    }
    ++many_nodes;
}

void sequence::operator =(const sequence& source){
    if (this == &source) {
        return;
    }
    list_clear(head_ptr);
    many_nodes = 0;
    size_type index = 1;
    for(cursor= source.head_ptr; cursor!=source.cursor; cursor = cursor->link()) {
        index++;
    }
    list_copy(source.head_ptr, head_ptr, tail_ptr);
    cursor = list_locate(head_ptr, index);
    if (index == 1) {
        precursor = NULL;
    } else {
        precursor = list_locate(head_ptr, index - 1);
    }
    many_nodes = source.many_nodes;
}

void sequence::remove_current() {
    assert(is_item());
    if (cursor == head_ptr) {
        head_ptr = head_ptr->link();
        list_head_remove(cursor);
        cursor = head_ptr;

    } else {
        list_remove(precursor);
        cursor = precursor->link();
    }
    --many_nodes;
}

sequence::value_type sequence::current() const {
    assert(is_item());
    return cursor->data();
}


