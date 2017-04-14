#include <iostream>
#include "deque.h"

using namespace std;

int main() {
    //=========================== Creating a Deque ====================//
    deque<int> d;
    assert(d.empty());
    d.push_back(5);
    assert (!d.empty());
    d.push_front(10);
    assert(d.front() == 10);
    cout << "D: " << d <<endl;
    //=========================== Creating another Deque ==============//
    deque<int> d1;
    d1.push_back(5);
    d1.push_back(10);
    d1.push_back(30);
    cout << "D1: " << d1 <<endl;
    //=========================== Copy Constructor ====================//
    deque<int> d2(d1);
    cout << "D2: " << d2 <<endl;
    assert (d2 == d1);
    assert(d2.back() == 30);
    //=========================== String Deque ========================//
    deque<string> d3;
    d3.push_front("hi");
    d3.push_back(",");
    d3.push_back("how");
    d3.push_back("are");
    d3.push_back("you");
    d3.push_back("?");
    cout << "D3: " << d3 <<endl;
    //=========================== Popping the Deque ===================//
    d3.pop_front();
    d3.pop_front();
    d3.pop_back();
    cout << "D3: " << d3 <<endl;

    cout << "All Tests Passed!" <<endl;
    return 0;
}