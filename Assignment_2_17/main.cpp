//Author: Muhammad Ali
//Assignment#2_Q17
#include <iostream>
#include <cassert>
#include "date.h"

int main() {
    date d (29, 1, 2017);
    assert(d.get_day() == 29);
    assert(d.get_month() == 1);
    assert(d.get_year() == 2017);

    assert(d.get_dayOfWeek(d.get_day(), d.get_month(), d.get_year()) == "Sunday");

    d.increment_day();
    assert(d.get_day() == 30);

    std::cout << "After incrementing a day:" << std::endl;
    display(d.get_day(), d.get_month(), d.get_year());
    std::cout << "All tests passed!" << std::endl;
    return 0;
}