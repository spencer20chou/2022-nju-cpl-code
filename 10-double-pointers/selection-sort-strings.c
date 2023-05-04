//
// Created by SpencerC on 2023-05-02.
//

#include <stdio.h>
#include <string.h>

#define LEN 8

void Swap(const char **left, const char **right);

void Print(const char *arr[], int len);

void SelectionSort(const char *arr[], int len);

int main() {
    const char *players[LEN] = {
            "Trae Young",
            "James Harden",
            "Joel Embiid",
            "Stephen Curry",
            "Kawhi Leonard",
            "Jayson Tatum",
            "Kevin Durant",
            "Michael Jordan"};

    Print(players, LEN);
    SelectionSort(players, LEN);
    Print(players, LEN);

    return 0;
}

void Swap(const char **left, const char **right) {
    const char *temp = *left;
    *left = *right;
    *right = temp;
}

void Print(const char *arr[], int len) {
    for (int i = 0; i < len; ++i) {
        printf("%s\n", arr[i]);
    }

    printf("\n");
}

void SelectionSort(const char *arr[], int len) {
    for (int i = 0; i < len; ++i) {
        const char *min = arr[i];
        int min_index = i;

        for (int j = i + 1; j < len; ++j) {
            if (strcmp(min, arr[j]) > 0) {
                min = arr[j];
                min_index = j;
            }
        }

        Swap(arr + i, arr + min_index);
    }
}