//
// Created by SpencerC on 2023-04-27.
//
#include <stdio.h>
#define LEN 10

int BinarySearch(int key, const int dict[], int len);

int main() {
    int dict[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    int key = 0;
    scanf("%d", &key);

    int index = BinarySearch(key, dict, LEN);

    if (index == -1) {
        printf("Not found!\n");
    } else {
        printf("The index of %d is %d.\n", key, index);
    }

    return 0;
}

int BinarySearch(int key, const int dict[], int len) {
    int low = 0;
    int high = len - 1;
    int index = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (dict[mid] < key) {
            low = mid + 1;
        } else if (dict[mid] > key) {
            high = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}
