//Author: Muhammad Ali
//Assignment#2
#include <cassert>
#include "account.h"

account::account (double b, double r)
{
    balance = b;
    rate = r;
}

double account::get_balance() const {return balance;}

double account::get_rate() const {return rate;}

void account::change_balance(double b) {balance = b;}

void account::change_rate(double r) {rate = r;}

void account::deposit(double a) {
    assert(a > 0);
    balance += a;
}

void account::withdraw(double a) {
    assert (a <= balance);
    balance -= a;
}

void account::add_interest(double y) {balance = balance * (1+((rate/100)*y));}

double account::count_years(double t, double b, double r) {
    assert(t > b);
    double years = (1/(r/100)) * ((t/b) - 1);
    return years;
}