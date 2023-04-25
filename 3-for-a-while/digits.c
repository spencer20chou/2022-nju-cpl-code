//
// Created by SpencerC on 2023-04-25.
//
#include <stdio.h>

int main() {
    int number = 0;
    scanf("%d", &number);

    int digits_of_num = 0;

    if (number == 0) {
        digits_of_num = 1;
    }
    while (number > 0) {
        number /= 10;
        digits_of_num++;
    }

    printf("The digits of number is %d.\n", digits_of_num);

    return 0;
}

