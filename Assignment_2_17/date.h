//Author: Muhammad Ali
//Assignment#2_Q17

#ifndef ASSIGNMENT2_17_DATE_H
#define ASSIGNMENT2_17_DATE_H


class date {
public:
    date(int d, int m, int y);
    //PostCondition: Date with day, month, year is created
    void check_parameters(int d, int m , int y);
    //Note: This method is called after date is created and also after the date is incremented
    /* PostCondition: This will check if the entered day, month, year are greater than 0. It will then check if the day
     * is correct for the corresponding month. It will also check February for leap year */
    int get_day() const;
    //PostCondition: Day part of the date is returned
    int get_month() const;
    //PostCondition: Month part of the date is returned
    int get_year() const;
    //PostCondition: Year part of the date is returned
    void increment_day();
    //PostCondition: Day is incremented to next day
    std::string get_dayOfWeek(int d, int m, int y);
    //PostCondition: Day of the week is calculated and returned
    //Credits: The formula was used from "Determination of the day of the week" - Wiki
    std::string get_monthName(int m);
    //PostCondition: Check and return month name
private:
    int day, month, year;
};
void display(int d, int m, int y);
//Free Function
//PostCondition: Display the date in integer and word format
#endif //ASSIGNMENT2_17_DATE_H
