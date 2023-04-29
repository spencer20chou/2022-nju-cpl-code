//
// Created by SpencerC on 2023-04-28.
//
#include <stdio.h>
#define NUM 5

int Min(int nums[], int len);

int main() {
    int numbers[NUM] = {10, 55, 2, -9, 11};
    int min = Min(numbers, NUM);
    printf("Min = %d\n", min);

    return 0;
}

int Min(int nums[], int len) {
    if (len == 1) {
        return nums[0];
    }

    int partial_min = Min(nums, len - 1);

    return nums[len - 1] > partial_min ? partial_min : nums[len - 1];
}
