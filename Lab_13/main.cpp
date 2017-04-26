//Author: Muhammad Ali
//Lab# 13
//Radix Sort

#include <cstdlib>
#include <iostream>
#include <list>

using namespace std;
//=========================== Getting Max ====================//
int Max(list<int> list){
    int max=0;
    while(!list.empty()){
        if((list.front())>max){
            max=list.front();
        }
        list.pop_front();
    }
    return max;
}
//=========================== Radix Sort =====================//
void radixSort(list<int>* myList){
    list<int> list1;
    list<int> list2;

    int divider=1;
    int maxNumber=Max(*myList);
    size_t size=myList->size();

    while(maxNumber>divider){
        for(size_t i=0;i<size;i++){
            if((myList->front()/divider)%2==0){
                list1.push_back(myList->front());
            }else{
                list2.push_back(myList->front());
            }
            myList->pop_front();
        }
        divider=2*divider;
        while(!list1.empty()){
            myList->push_back(list1.front());
            list1.pop_front();
        }
        while(!list2.empty()){
            myList->push_back(list2.front());
            list2.pop_front();
        }
    }
}
//=========================== Main Method ====================//
int main(){
    list<int> myList;
    int random = 0;
    cout<< "Printing Unsorted:"<<endl;
    for(int i=0;i<30;i++){
        random = rand() % 100;
        cout << random << " ";
        myList.push_back(random);
    }
    cout<<endl;
    cout<< "Printing Sorted:"<<endl;
    radixSort(&myList);
    while(!myList.empty()){
        cout<<myList.front()<<" ";
        myList.pop_front();
    }
}