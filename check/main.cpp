#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <string>
#include <array>
#include <set>
#include <cassert>
using namespace std;
int* foo (int a)
{
    int b =5;
    int c = a + b;
    return &c;
}

int main() {
    int *i = foo(5);
    cout<< i<<endl;
    return 0;
}