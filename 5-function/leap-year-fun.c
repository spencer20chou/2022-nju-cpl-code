//
// Created by SpencerC on 2023-04-27.
//
#include <stdio.h>
#include <stdbool.h>

bool IsLeapYear(int year);

int main() {
    int year = 0;
    scanf("%d", &year);

    bool leap = IsLeapYear(year);

    if (!leap) {
        printf("The year %d is a common year.\n", year);
    } else {
        printf("The year %d is a leap year.\n", year);
    }

    return 0;
}

bool IsLeapYear(int year) {
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    return leap;
}