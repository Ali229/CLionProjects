#include <iostream>

using namespace std;
void insertionSort(int array[], int size) {
    int j, temp;
    for (int i = 0; i < size; i++){
        j = i;
        while (j > 0 && array[j] < array[j-1]){
            temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
            j--;
        }
    }
}

int main() {
    int const SIZE = 500000;
    int array[SIZE];
    for (int j = 0; j < SIZE; ++j) {
        array[j] = rand() % 101 + 0;
    }
    for (int i = 0; i <SIZE ; ++i) {
        cout << array[i] << " ";
    }
    cout<< endl;
    insertionSort(array, SIZE);
    for (int i = 0; i <SIZE ; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}