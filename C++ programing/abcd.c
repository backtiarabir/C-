#include <stdio.h>

enum DayOfWeek {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

enum DayStatus {
    WORKING_DAY,
    HOLIDAY
};

enum DayStatus getDayStatus(enum DayOfWeek dayOfWeek) {
    switch (dayOfWeek) {
        case SATURDAY:
        case SUNDAY:
            return HOLIDAY;
        default:
            return WORKING_DAY;
    }
}

int main() {
    enum DayOfWeek dayOfWeek;
    printf("Enter day of the week (0-6):\n");
    scanf("%d", &dayOfWeek);
    enum DayStatus dayStatus = getDayStatus(dayOfWeek);
    if (dayStatus == HOLIDAY) {
        printf("It's a holiday!\n");
    } else {
        printf("It's a working day.\n");
    }
    return 0;
}
