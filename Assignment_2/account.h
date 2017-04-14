//Author: Muhammad Ali
//Assignment#2
#ifndef ASSIGNMENT2_ACCOUNT_H
#define ASSIGNMENT2_ACCOUNT_H

class account {
public:
    account(double b = 0, double r = 0);
    //PostCondition: Account with balance and interest rate is created
    double get_balance() const;
    //PostCondition: Balance has been returned
    double get_rate() const;
    //PostCondition: Interest rate has been returned
    void change_balance(double b);
    //PostCondition: Balance has been changed
    void change_rate(double b);
    //PostCondition: Interest rate has been changed
    void deposit(double a);
    //PreCondition: Can only deposit balance greater than 0
    //PostCondition: Amount has been deposited to account
    void withdraw(double a);
    //PreCondition: Cannot withdraw more money than available in the account
    //PostCondition: Amount has been withdrawn from account
    void add_interest(double y);
    //PreCondition: Years have to be greater than 0 - ex 0.5, 1, 2
    //PostCondition: Interest is added to balance using y as years.
    double count_years(double t, double b, double r);
    //PreCondition: Target balance "t" greater than the current balance has been defined
    //PostCondition: Number of years to achieve that target balance is returned
private:
    double balance;
    double rate;
};
#endif //ASSIGNMENT2_ACCOUNT_H
