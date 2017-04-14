//Author: Muhammad Ali
//Assignment #5 - Set With Linked List

#include "set.h"

using namespace std;

set::set() {
    head = NULL;
    used = 0;
}

set::~set() {
    list_clear(head);
    used = 0;
}

set::set(const set &source) {
    node *tail;
    used = source.used;
    list_copy(source.head, head, tail);
}

set &set::operator=(const set &source) {
    if (this == &source) {
        return *this;
    }
    list_clear(head);
    node *tail;
    list_copy(source.head, head, tail);
    used = source.used;
    return *this;
}

void set::insert(const value_type &entry) {
    if (!contains(entry)) {
        list_head_insert(head, entry);
        used++;
    }
}

void set::remove(const value_type &entry) {
    node *cursor;
    if (used == 1) {
        if (head->data() == entry) {
            list_head_remove(head);
            used--;
        }
    } else if (used > 1) {
        for (cursor = head; cursor != NULL; cursor = cursor->link()) {
            if (cursor->link()->data() == entry) {
                list_remove(cursor);
                used--;
            }
        }
    }
}

set::size_type set::size() const {
    return used;
}

bool set::contains(const value_type &entry) const {
    return list_search(head, entry) != NULL;
}

set set_union(const set &s1, const set &s2) {
    set s3;
    node *cursor;
    for (cursor = s1.head; cursor != NULL; cursor = cursor->link()) {
        s3.insert(cursor->data());
    }
    for (cursor = s2.head; cursor != NULL; cursor = cursor->link()) {
        s3.insert(cursor->data());
    }
    return s3;
}

set set_intersection(const set &s1, const set &s2) {
    set s3;
    node *cursor;
    for (cursor = s1.head; cursor != NULL; cursor = cursor->link()) {
        if (s2.contains(cursor->data())) {
            s3.insert(cursor->data());
        }
    }
    return s3;
}

set set_difference(const set &s1, const set &s2) {
    set s3;
    node *cursor;
    for (cursor = s1.head; cursor != NULL; cursor = cursor->link()) {
        if (!s2.contains(cursor->data())) {
            s3.insert(cursor->data());
        }
    }
    return s3;
}

bool is_subset(const set &s1, const set &s2) {
    node *cursor;
    for (cursor = s1.head; cursor != NULL; cursor = cursor->link()) {
        if (!s2.contains(cursor->data())) {
            return false;
        }
    }
    return true;
}

bool operator==(const set &s1, const set &s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    return is_subset(s1, s2);
}

std::ostream &operator<<(std::ostream &output, const set &s) {
    node *cursor;
    cout << "{";
    for (cursor = s.head; cursor != NULL; cursor = cursor->link()) {
        if (cursor->link() != NULL) { cout << cursor->data() << ", "; }
        else { cout << cursor->data(); }

    }
    cout << "}";
    return output;
}





