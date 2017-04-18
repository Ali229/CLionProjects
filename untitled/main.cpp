#include <iostream>
#include <vector>
#include "heap.h"
using namespace std;
heap<int> h;
template <class item>
void heapSort(item *a, size_t count) {
    assert (a!= NULL);
    for (int i = 0; i <= count -1 ; ++i) {
        h.insert(a[i]);
    }
    for (int j = count -1; j >=0 ; --j) {
        a[j] = h.max();
        h.remove();
    }
}

int main() {
    int v[5];
    v[0] = 10;
    v[1] = 20;
    v[2] = 60;
    v[3] = 30;
    v[4] = 1;
    heapSort(v, 5);
    for (int i = 0; i <= 4 ; ++i) {
        cout << v[i] << endl;
    }
    return 0;
}

