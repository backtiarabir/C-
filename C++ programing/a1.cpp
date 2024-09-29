// working day & holiday

#include<iostream>
enum Dayofweek {
    sunday,
    monday,
    tuesday,
    wednesday,
    thrusday,
    friday,
    saturday,
};
    enum daystatus{
    WORKING_DAY,
    HOLIDAY
    };

int main() {
    DayType;
    int day;

    std::cout << "Enter a day (1-7): ";
    std::cin >> day;

    switch (day) {
        case sunday:
        case monday:
        case tuesday:
        case wednesday:
        case thrusday:
            dayType = WORKING_DAY;
            break;
        case friday:
        case saturday:
            dayType = HOLIDAY;
            break;
        default:
            std::cout << "Invalid day entered.\n";
            return 1;
    }

    if (dayType == WORKING_DAY) {
        std::cout << "The day is a working day.\n";
    } else {
        std::cout << "The day is a holiday.\n";
    }

    return 0;
}
