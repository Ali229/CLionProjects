#include <iostream>

using namespace std;
void shellSort(int array[], int size) {
    int j, temp, gap = size/2;
    while (gap > 0) {
    for (int i = 0; i+gap <= size; i++){
        j = i;
        while (j-gap>= 0 && array[j] < array[j-gap]){
            temp = array[j];
            array[j] = array[j-gap];
            array[j-gap] = temp;
            j = j-gap;
        }
    }
    gap = gap/2;
    }
}

int main() {l
    int const SIZE = 500000;
    int array[SIZE];
    for (int j = 0; j < SIZE; ++j) {
        array[j] = rand() % 101 + 0;
    }
    for (int i = 0; i <SIZE ; ++i) {
        cout << array[i] << " ";
    }
    cout<< endl;
    shellSort(array, SIZE);
    for (int i = 0; i <SIZE ; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}