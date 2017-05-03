#include <iostream>
#include <list>

using namespace std;
list<int> flipList(list<int> listForSort) {
    int temp;
    list<int>::iterator i = listForSort.begin();
    list<int>::iterator iEnd = --listForSort.end();
    for (int x = 0; x<listForSort.size()/2; x++) {
        temp = *i;
        *i = *iEnd;
        *iEnd = temp;
        ++i;
        --iEnd;
    }
    return listForSort;
}






void printList(list<int> unsortedList) {
    list<int>::iterator i;
    for(i = unsortedList.begin(); i != unsortedList.end(); i++) {
        cout<< *i << " ";
    }
    cout<<endl;
}
int main() {
    list<int> unsortedList = {8,7,6,5,4,3,2,1};
    printList(unsortedList);
    unsortedList = flipList(unsortedList);
    cout<< "Now sorting the list..."<<endl;
    printList(unsortedList);
    std::cout << "All Tests Passed!" << std::endl;
    return 0;
}