#include <iostream>
#include <list>

using namespace std;
int main ()
{
    int x = 0;
    std::list<int> mylist;
    for (int i = 0; i < 100000000 ; ++i) {
        mylist.push_back(100);
    }
    cin>>x;
    cout<< "hi"<<endl;
    return 0;
}

