//Author: Muhammad Ali
//Assignment#2
#include <iostream>
#include <cassert>
#include "account.h"

int main() {
    account a (1000, 0.1);
    assert(a.get_balance() == 1000);
    assert(a.get_rate() == 0.1);

    a.change_balance(500);
    assert(a.get_balance() == 500);
    a.change_rate(0.2);
    assert(a.get_rate() == 0.2);

    a.deposit(50);
    assert(a.get_balance() == 550);
    a.withdraw(10);
    assert(a.get_balance() == 540);

    std::cout << "Your balance is: " << a.get_balance() << std::endl;

    a.add_interest(2);
    assert(a.get_balance() == 542.16);
    std::cout << "Interest rate is: " << a.get_rate() << std::endl;
    std::cout << "Your balance after adding interest is: " << a.get_balance() << std::endl;

    assert(a.count_years(60, 50, 0.1) >= 199 && a.count_years(60, 50, 0.1) <= 200);
    std::cout << "It will take " <<  a.count_years(60, 50, 0.1) <<
            " years to go get a balance to get balance from 50 to 60 at an interest rate of 0.1% per year"<< std::endl;

    std::cout << "All tests passed!" << std::endl;
    return 0;
}