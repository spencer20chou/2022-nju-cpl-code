//
// Created by SpencerC on 2023-04-24.
//
#include <stdio.h>

int main() {
    int max = 0;
    int count = 0;
    scanf("%d", &max);

    for (int number = 2; number <= max; number++) {
        int is_prime = 1;
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            count++;
            printf("%d ", number);
        }
    }

    printf("\ncount = %d\n", count);

    return 0;
}

