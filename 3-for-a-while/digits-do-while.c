//
// Created by SpencerC on 2023-04-25.
//

#include <stdio.h>

int main() {
    int number = 0;
    scanf("%d", &number);

    int digits_of_num = 0;

    do {
        number /= 10;
        digits_of_num++;
    } while (number > 0);

    printf("The digits of number is %d.\n", digits_of_num);

    return 0;
}
