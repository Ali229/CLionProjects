#include <iostream>
#include <vector>

using namespace std;
vector<int> arr;
void printNumber(int n) {
    if (n != 0) {
        arr.push_back(n % 10);
        printNumber(n / 10);
    }
}

int main() {
    printNumber(100);
    for (int i = arr.size() -1; i >= 0; --i) {
        cout << arr[i] <<endl;
    }
    return 0;
}

