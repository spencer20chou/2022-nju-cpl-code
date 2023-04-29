//
// Created by SpencerC on 2023-04-29.
//

#include <stdio.h>

int Sum(int nums[], int len);

int main() {
    int numbers[] = {1, 34, 65, 56, 23, 5};
    int len = sizeof(numbers) / sizeof(int);

    int sum = Sum(numbers, len);

    printf("Sum = %d\n", sum);

    return 0;
}

int Sum(int nums[], int len) {
    if (len == 0) {
        return 0;
    }

    int partial_sum = Sum(nums, len - 1);
    return partial_sum + nums[len - 1];
}
