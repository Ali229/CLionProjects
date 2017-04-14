//Author: Muhammad Ali
//Lab #4
//Sequence2

#include <queue>
#include <assert.h>
#include "sequence2.h"
using namespace std;
using namespace main_savitch_4;

sequence::sequence(size_type initial_capacity){
    used = 0;
    current_index = 0;
    data = new value_type[initial_capacity];
    capacity = initial_capacity;
}

sequence::sequence(const sequence& source){
    data = new value_type[source.capacity];
    capacity = source.capacity;
    used = source.used;
    current_index = source.current_index;
    copy(source.data, source.data + used, data);
}

sequence::~sequence( ){
    delete [] data;
}

void sequence::resize(size_type new_capacity) {
    if (new_capacity == capacity || new_capacity < used) {
        return;
    }
    else {
        value_type* new_data;
        new_data = new value_type[new_capacity];
        copy(data, data+used, new_data);
        delete [] data;
        data = new_data;
        capacity = new_capacity;
    }
}

void sequence::start(){
    current_index = 0;
}

void sequence::advance( ){
    assert(is_item());
    current_index++;

}

void sequence::insert(const value_type& entry){
    if(used >= capacity)
    {
        resize((capacity + 2));
    }
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

void sequence::attach(const value_type& entry){
    if (used>= capacity)
    {
        resize(capacity + 2);
    }
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
    }}

void sequence::remove_current(){
    assert(is_item());
    size_type i;
    for ( i = current_index; i < used; i++)
    {
        data[i] = data[i+1];
    }
    used --;
    }

void sequence::operator =(const sequence& source){
        value_type *new_data;

    if(this == &source)
        return;
    if(capacity != source.capacity)
    {
        new_data = new value_type[source.capacity];
        delete [] data;
        data = new_data;
        capacity = source.capacity;
    }
    used = source.used;
    current_index = source.current_index;
    copy(source.data, source.data+used, data);
}

sequence::size_type sequence::size() const{
    return used;
}

bool sequence::is_item() const {
    return current_index < used;
}

sequence::value_type sequence::current() const {
    assert(is_item());
    return data[current_index];
}