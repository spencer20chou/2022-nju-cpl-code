//
// Created by SpencerC on 2023-04-24.
//
#include <stdio.h>
#define NUM 5

int main() {
    int numbers[NUM] = {10, 20, 15, 87, 8};

    int min = numbers[0];
    for (int i = 1; i < NUM; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("min = %d", min);

    return 0;
}
