//
// Created by SpencerC on 2023-04-27.
//
#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int number);

int main() {
    int max = 0;
    int count = 0;
    scanf("%d", &max);

    for (int number = 2; number <= max; number++) {
        if (IsPrime(number)) {
            count++;
            printf("%d ", number);
        }
    }

    printf("\ncount = %d\n", count);

    return 0;
}

bool IsPrime(int number) {
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

