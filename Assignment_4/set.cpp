//Author: Muhammad Ali
//Assignment #4
//Sets Using Dynamic Array

#include <iostream>
#include <assert.h>
#include "set.h"
using namespace std;
set::set(size_type INITIAL_CAPACITY){
    data = new value_type[INITIAL_CAPACITY];
    capacity = INITIAL_CAPACITY;
    used = 0;
}
set::~set() {
    delete [] data;
    capacity = 0;
    used = 0;
}
set::set (const set& source) {
    data = new value_type[source.capacity];
    capacity = source.capacity;
    used = source.used;
    copy(source.data, source.data + used, data);
}
set& set::operator =(const set& source) {
    if (this == &source) {
        return *this;
    }
    if (capacity != source.used) {
        resize(source.used);
    }
    used = source.used;
    copy(source.data, source.data + used, data);
    return *this;
}
set::size_type set::size() const { return used; }

void set::insert(const value_type &entry) {
    if (!contains(entry)) {
        if (used == capacity) {
            resize(used + 5);
        }
        data[used] = entry;
        used++;
    }
}

bool set::contains(const value_type &entry) const {
    for (size_t x=0; x< used; x++){
        if (data[x] == entry) {
            return true;
        }
    }
    return false;
}

void set::remove(const value_type &entry) {
    size_type index =0;
    index = find(entry);
    if (index == used) {return;}
    else {
        --used;
        data[index] = data[used];
    }
}

std::ostream& operator << (std::ostream &output, const set &s) {
    cout<< "Set(";
    for (size_t x = 0; x<s.size(); x++) {
        if (x == 0) { cout<< s.data[x]; }
        else {cout<< ", " << s.data[x];}
    }
    cout<< ")"<< endl;
    return output;
}

set set_union(const set &s1, const set &s2) {
    set s3;
    for (size_t x = 0; x < s1.size(); x++) {
        s3.insert(s1.data[x]);
    }
    for (size_t x = 0; x < s2.size(); x++) {
        s3.insert(s2.data[x]);
    }
    return s3;
}
set set_intersection (const set& s1, const set& s2) {
    set s3;
    for (size_t x = 0; x < s1.size(); x++) {
        if (s2.contains(s1.data[x])) {
            s3.insert(s1.data[x]);
        }
    }
    return s3;
}

set set_difference (const set& s1, const set& s2) {
    set s3;
    for (size_t x = 0; x < s1.size(); x++) {
        if (!s2.contains(s1.data[x])) {
            s3.insert(s1.data[x]);
        }
    }
    return s3;
}

bool is_subset (const set& s1, const set& s2) {
    for (size_t x = 0; x < s1.size(); x++) {
        if (!s2.contains(s1.data[x])) {return false;}
    }
    return true;
}

bool operator == (const set& s1, const set& s2){
    if (s1.size() != s2.size()) {
        return false;
    }
    for (size_t x = 0; x < s1.size(); x++) {
        if (!s2.contains(s1.data[x])) {return false;}
    }
    return true;
}

std::size_t set::find (const value_type& entry) const {
    for (size_t x = 0; x < size(); x++) {
        if (data[x] == entry) {return x;}
    }
    return used;
}
void set::resize(unsigned int new_size) {
    if (capacity  == new_size){
        return;
    }
    if (new_size < used) {
        new_size = used;
    }
    value_type *data_temp = new value_type[new_size];
    copy(data, data+used, data_temp);
    delete [] data;
    data = data_temp;
    capacity = new_size;
}