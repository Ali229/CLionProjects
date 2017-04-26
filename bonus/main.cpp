//Author: Muhammad Ali
//Took Help From A Friend
//Bonus
//Set Using B-tree

#include <iostream>
#include "set.h"

using namespace std;

int main() {
    set<int> s1;
    cout<<"Inserting 1, 3, 8, 5"<<endl;
    s1.insert(1);
    s1.insert(3);
    s1.insert(8);
    s1.insert(5);
    assert (!s1.empty());
    s1.print(5);
    cout<<"=================================================="<<endl;
    cout<<"Removing 8"<<endl;
    s1.erase(8);
    s1.print(5);
    cout<<"=================================================="<<endl;
    cout<<"Inserting 20, 7, 9, 2"<<endl;
    s1.insert(20); s1.insert(7); s1.insert(9);s1.insert(2);
    s1.print(5);
    cout<<"=================================================="<<endl;
    cout<<"Testing Copy Constructor"<<endl;
    set<int> s2(s1);
    s2.print(5);
    cout<<"=================================================="<<endl;
    cout<<"Testing clear"<<endl;
    set<int> s3;
    s3.insert(10);
    s3.insert(220);
    s3.insert(32);
    s3.clear();
    assert(s3.empty());
    s3.print(5);
    cout<<"=================================================="<<endl;
    cout<<"All Tests Passed!"<<endl;
    return 0;
}