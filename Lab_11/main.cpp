//Author: Muhammad Ali
//Lab# 11
//Priority Queue Using Max Heap

#include <iostream>
#include "priority_queue.h"

int main() {
    priority_queue<int> p;
    cout<< "Inserting 1 to 20..."<<endl;
    for (int x = 1; x <= 20; x++) {
        p.push(x);
    }
    cout<< "Popping 20..."<<endl;
    p.pop(); //4-3-2-1
    cout<< "Inserting 40, 80, 60, 100..."<<endl;
    p.push(40);
    p.push(80);
    p.push(60);
    p.push(100);
    cout<< "Priority Queue:"<<endl;
    while (p.size()!=0) {
        cout<< p.top()<<" ";
        p.pop();
    }
    cout<<endl;
    return 0;
}