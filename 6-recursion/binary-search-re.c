//
// Created by SpencerC on 2023-04-29.
//

#include <stdio.h>

#define LEN 10

int BinarySearch(const int dict[], int low, int high, int key);

int main() {
    int dict[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    int key;
    scanf("%d", &key);

    printf("The index is %d.\n", BinarySearch(dict, 0, LEN - 1, key));

    return 0;
}

int BinarySearch(const int dict[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (dict[mid] == key) {
        return mid;
    }

    if (dict[mid] > key) {
        return BinarySearch(dict, low, mid - 1, key);
    }

    return BinarySearch(dict, mid + 1, high, key);
}
