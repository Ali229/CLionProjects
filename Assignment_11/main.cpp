//Author: Muhammad Ali
//Assignment# 11
//Shell Sort
#include <cstdlib>
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

int main() {
    int const SIZE = 1000;
    int array[SIZE];
    //Filling array and printing unsorted
    for (int j = 0; j < SIZE; ++j) {
        //srand (time(NULL));
        array[j] = rand() % 101 + 0;

        cout << array[j] << " ";
    }
    cout<< endl;
    shellSort(array, SIZE);
    //Printing sorted array
    for (int i = 0; i <SIZE ; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}