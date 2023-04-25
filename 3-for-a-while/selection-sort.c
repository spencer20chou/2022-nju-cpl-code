//
// Created by SpencerC on 2023-04-25.
//
#include <stdio.h>

#define LEN 10
int numbers[LEN] = {14, 51, 2, 5, 87, -87, 100, 25, 0, -9};

int main() {
    for (int i = 0; i < LEN; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int min = 0;
    int index_of_min = 0;
    int temp = 0;
    for (int i = 0; i < LEN; ++i) {
        min = numbers[i];
        index_of_min = i;

        for (int j = i + 1; j < LEN; ++j) {
            if (numbers[j] < min) {
                min = numbers[j];
                index_of_min = j;
            }
        }

        temp = numbers[i];
        numbers[i] = numbers[index_of_min];
        numbers[index_of_min] = temp;
    }

    for (int i = 0; i < LEN; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}

