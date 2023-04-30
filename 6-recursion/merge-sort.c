//
// Created by SpencerC on 2023-04-29.
//
#include <stdio.h>

#define LEN 7

void MergeSort(int nums[], int left, int right);

void Merge(int nums[], int left, int mid, int right);

int main() {
    int numbers[LEN] = {23, 43, 3, 54, 11, 66, -6};

    MergeSort(numbers, 0, LEN - 1);

    for (int i = 0; i < LEN; ++i) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

void MergeSort(int nums[], int left, int right) {
    if (left == right) {
        return;
    }

    int mid = (left + right) / 2;

    MergeSort(nums, left, mid);
    MergeSort(nums, mid + 1, right);

    Merge(nums, left, mid, right);
}

void Merge(int nums[], int left, int mid, int right) {
    int size = right - left + 1;
    int copy[size];

    for (int i = 0, j = left; i < size; ++i, ++j) {
        copy[i] = nums[j];
    }

    int one_index = left;
    int another_index = mid + 1;
    int copy_index = 0;

    while (one_index <= mid && another_index <= right) {
        if (nums[one_index] <= nums[another_index]) {
            copy[copy_index] = nums[one_index];
            one_index++;
        } else {
            copy[copy_index] = nums[another_index];
            another_index++;
        }
        copy_index++;
    }

    while (one_index <= mid) {
        copy[copy_index] = nums[one_index];
        one_index++;
        copy_index++;
    }

    while (another_index <= right) {
        copy[copy_index] = nums[another_index];
        another_index++;
        copy_index++;
    }

    for (int i = 0, j = left; i < size; ++i, ++j) {
        nums[j] = copy[i];
    }
}
