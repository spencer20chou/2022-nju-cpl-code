//
// Created by SpencerC on 2023-04-25.
//
#include <stdio.h>
#define LEN 10
int dict[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

int main() {
    int key = 0;
    scanf("%d", &key);

    int low = 0;
    int high = LEN - 1;
    int index = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (dict[mid] < key) {
            low = mid + 1;
        } else if (dict[mid] > key) {
            high = mid - 1;
        } else {
            index = mid;
            break;
        }
    }

    if (index == -1) {
        printf("Not found!\n");
    } else {
        printf("The index of %d is %d.\n", key, index);
    }

    return 0;
}
