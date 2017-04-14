#include <iostream>
#include <cassert>
#include <string>
#include "deque.h"

using namespace std;

int main() {
    deque<int> d;
    assert(d.empty());
    d.push_front(4);//4
    d.push_front(5);//54
    d.push_back(3);//543
    d.push_back(2);//5432
    d.push_front(1);//15432
    d.pop_back();//1543
    d.pop_front();//543
    d.pop_front();//43
    assert(!d.full());
    cout<< d<<endl;

    deque<int> d1;
    d1.push_front(1);
    d1.push_front(2);
    deque<int> d2;
    d2.push_back(1);
    d2.push_front(2);
    assert(d1==d2);

    assert(d1.back() == 1);
    assert(d2.front() == 2);

    deque<string> d3;
    d3.push_back("hi");
    d3.push_back("hello");
    cout<< d3<<endl;

    std::cout << "All Tests Passed!" << std::endl;
    return 0;
}