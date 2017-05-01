#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <string>
#include <array>
#include <set>

using namespace std;
int main() {
    set<string> s1;
    s1.insert("hello");
    s1.insert("hi");

    for (set<string>::iterator i = s1.begin(); i != s1.end(); ++i) {
        cout<< *i<<endl;
        if (*i == "hi") {
            cout << "found" <<endl;
        }
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}