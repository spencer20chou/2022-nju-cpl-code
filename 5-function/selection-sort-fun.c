//
// Created by SpencerC on 2023-04-27.
//
#include <stdio.h>

#define LEN 10
int numbers[LEN] = {14, 51, 2, 5, 87, -87, 100, 25, 0, -9};

void Print(const int numbers[], int len);

void SelectionSort(int numbers[], int len);

void Swap(int *left, int *right);

int main() {
    Print(numbers, LEN);

    SelectionSort(numbers, LEN);

    Print(numbers, LEN);
    return 0;
}

void Print(const int numbers[], int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

void Swap(int *left, int *right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

void SelectionSort(int numbers[], int len) {
    for (int i = 0; i < len; ++i) {
        int min = numbers[i];
        int index_of_min = i;

        for (int j = i + 1; j < len; ++j) {
            if (numbers[j] < min) {
                min = numbers[j];
                index_of_min = j;
            }
        }

        Swap(&numbers[i], &numbers[index_of_min]);
    }
}
