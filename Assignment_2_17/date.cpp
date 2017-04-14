//Author: Muhammad Ali
//Assignment#2_Q17
#include <cassert>
#include <iostream>
#include "date.h"
using namespace std;
date::date(int d, int m, int y) {
    check_parameters(d, m ,y);
    day = d;
    month = m;
    year = y;
}

void date::check_parameters(int d, int m, int y) {
    assert(m > 0 && m < 13 && d > 0 && y > 0);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        assert(d < 32);
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        assert(d < 31);
    }
        //Checking leap year for February
    else {
        if ((y % 400 == 0 || y % 100 != 0) && (y % 4 == 0)) {
            assert(d < 30);
        }
        else {assert(d < 29);}
    }
};

int date::get_day() const {return day;}

int date::get_month() const {return month;}

int date::get_year() const {return year;}

void date::increment_day() {
    day++;
    check_parameters(day, month, year);
}

string date::get_dayOfWeek(int d, int m, int y) {
    int x = (d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7;
    string dow;
    switch (x) {
        case 0 : dow = "Sunday"; break;
        case 1 : dow = "Monday"; break;
        case 2 : dow = "Tuesday"; break;
        case 3 : dow = "Wednesday"; break;
        case 4 : dow = "Thursday"; break;
        case 5 : dow = "Friday"; break;
        case 6 : dow = "Saturday"; break;
    }
    return dow;
}

string date::get_monthName(int m) {
    string mn;
    switch (m) {
        case 1 : mn = "January"; break;
        case 2 : mn = "February"; break;
        case 3 : mn = "March"; break;
        case 4 : mn = "April"; break;
        case 5 : mn = "May"; break;
        case 6 : mn = "June"; break;
        case 7 : mn = "July"; break;
        case 8 : mn = "August"; break;
        case 9 : mn = "September"; break;
        case 10 : mn = "October"; break;
        case 11 : mn = "November"; break;
        case 12 : mn = "December"; break;
    }
    return mn;
}

void display(int d, int m, int y) {
    cout << "The date is: " << m << "/" << d << "/" << y << endl;
    date d1(d, m, y);
    string dow = d1.get_dayOfWeek(d, m, y);
    string mn = d1.get_monthName(m);
    cout << dow << ", " << mn << " " << d << ", " << y << endl;

}
