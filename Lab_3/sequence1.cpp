//Author: Muhammad Ali
//Lab3 Sequence.cpp

#include <cassert>
#include "sequence1.h"
using namespace main_savitch_3;

sequence::sequence() {
    used = 0;
    current_index = 0;
}
void sequence::start() {
    current_index = 0;
}

void sequence::advance() {
    assert(is_item());
    current_index++;
}

void sequence::insert(const value_type &entry) {
    assert(size() < CAPACITY);
    if (is_item()) {
        for (size_t x = used+1; x > current_index; x--) {
            data[x] = data[x-1];
        }
        used++;
        data[current_index] = entry;
    } else {
        for (size_t x = used+1; x > 0 ; x--) {
            data[x] = data[x-1];
        }
        used++;
        current_index = 0;
        data[current_index] = entry;
    }
}

void sequence::attach(const value_type &entry) {
    assert(size() < CAPACITY);
    if (is_item()) {
        for (size_t x = used; x > current_index; x--) {
            data[x] = data[x-1];
        }
        used++;
        current_index++;
        data[current_index] = entry;
    } else {
        used++;
        current_index=used-1;
        data[current_index]=entry;
    }
}

void sequence::remove_current() {
    assert(is_item());
    size_type i;
    for ( i = current_index; i < used; i++)
    {
        data[i] = data[i+1];
    }
    used --;
}

sequence::size_type sequence::size() const {return used;}

bool sequence::is_item() const { return current_index < used;}

sequence::value_type sequence::current() const {
    assert(is_item());
    return data[current_index];
}




