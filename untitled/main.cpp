#include <iostream>
#include <list>

using namespace std;
int main ()
{
    int myints[]= {17,89,7,14};
    std::list<int> mylist (myints,myints+4);
    mylist.clear();
    //mylist.remove(89);

    std::cout << "mylist contains:";
    for (std::list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}

