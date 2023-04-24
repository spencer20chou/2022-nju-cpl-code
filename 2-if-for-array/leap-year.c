//
// Created by SpencerC on 2023-04-24.
//
#include <stdio.h>

int main() {
    int year = 0;
    scanf("%d", &year);

    int leap = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        leap = 1;
    }

    if (leap == 0) {
        printf("The year %d is a common year.\n", year);
    } else {
        printf("The year %d is a leap year.\n", year);
    }

    return 0;
}
