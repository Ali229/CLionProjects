#include <iostream>
#include <list>
#include <stack>
#include <cstring>
#include <cstdlib>

using namespace std;

//=========================== Fill List ===========================//
void fillList(list<string> &l1) {
    l1.push_back("10");
    l1.push_back("2");
    l1.push_back("+");//12
    l1.push_back("5");
    l1.push_back("-");//7
    l1.push_back("2");
    l1.push_back("*");//14
    l1.push_back("1");
    l1.push_back("+");//15
    l1.push_back("3");
    l1.push_back("/");//5
}
//=========================== Evaluate Using Stack ================//
stack<int> evaluate(list<string> &l1) {
    stack<int> s;
    list<string>::iterator itr;

    for (itr = l1.begin(); itr != l1.end(); itr++) {
        const string str = *itr;
        const char *c = str.c_str();
        if (isdigit(*c)) {
            s.push(atoi(c));
        } else {
            int sec = s.top();
            s.pop();
            int first = s.top();
            s.pop();
            int calc = 0;
            switch (*c) {
                case '+' :
                    calc = first + sec;
                    break;
                case '-' :
                    calc = first - sec;
                    break;
                case '/' :
                    calc = first / sec;
                    break;
                case '*' :
                    calc = first * sec;
                    break;
                default:
                    break;
            }
            s.push(calc);
        }
    }
    return s;
}
//=========================== Print The Result =================//
void display(stack<int> &answer) {
    if (answer.size() == 1) {
        cout << answer.top() << endl;
    } else {
        cout << "Your input is invalid";
    }
}

int main() {
    list<string> l1;
    fillList(l1);
    stack<int> answer = evaluate(l1);
    display(answer);
    return 0;
}

