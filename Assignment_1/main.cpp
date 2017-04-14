//Precondition: assert function x>0 and x<7
//Postcondition: Provide the area of the shapes
//Author: Muhammad Ali
#include <iostream>
#include <cmath>
#include <math.h>
#include <assert.h>
using namespace std;
void triangleArea(int l);
void squareArea(int l);
void pentagonArea(int l);
void hexagonArea(int l);
void heptagonArea(int l);
void octagonArea(int l);
int n = 1;

int main() {
    for (int x = 1; x < 7; x++) {
        triangleArea(x);
        squareArea(x);
        pentagonArea(x);
        hexagonArea(x);
        heptagonArea(x);
        octagonArea(x);
    }
    return 0;
}

void triangleArea(int l) {
    assert(l>0 && l<7);
    double a = sqrt(3) / 4 * l * l;
    cout << n << " Area of Triangle with length " << l << " is " << a << endl;
    n++;
}

void squareArea(int l) {
    assert(l>0 && l<7);
    double a = l * l;
    cout << n << " Area of Square with length " << l << " is " << a << endl;
    n++;
}

void pentagonArea(int l) {
    assert(l>0 && l<7);
    double a = l * l * sqrt(25.0 + 10.0 * sqrt(5.0)) / 4.0;
    cout << n << " Area of Pentagon with length " << l << " is " << a << endl;
    n++;
}

void hexagonArea(int l) {
    assert(l>0 && l<7);
    double a = l * l * 3 * sqrt(3) / 2;
    cout << n << " Area of Hexagon with length " << l << " is " << a << endl;
    n++;
}

void heptagonArea(int l) {
    assert(l>0 && l<7);
    double a = (7.0 / 4.0)*(l * l)*(1 / tan(M_PI / 7.0));
    cout << n << " Area of Heptagon with length " << l << " is " << a << endl;
    n++;
}

void octagonArea(int l) {
    assert(l>0 && l<7);
    double a = 2.0 * (1 + sqrt(2)) * l * l;
    cout << n << " Area of Octagon with length " << l << " is " << a << endl;
    n++;
}