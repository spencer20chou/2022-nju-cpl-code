//
// Created by SpencerC on 2023-05-04.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintInts(const int *integers, int len);

void PrintStrs(const char *str[], int len);

int CompareInts(const void *left, const void *right);

int CompareStrs(const void *left, const void *right);

int main() {
    int numbers[] = {12, 54, 67, 231, 67, 2, 66, 100};
    int sizeof_nums = sizeof(numbers) / sizeof(int);

    int (*cmp)(const void *, const void *) = CompareInts;

    qsort(numbers, sizeof_nums, sizeof *numbers, cmp);
    PrintInts(numbers, sizeof_nums);

    const char *names[] = {
            "Trae Young",
            "James Harden",
            "Joel Embiid",
            "Stephen Curry",
            "Kawhi Leonard",
            "Jayson Tatum",
            "Kevin Durant",
            "Michael Jordan"};
    int sizeof_names = sizeof names / sizeof *names;

    cmp = CompareStrs;

    qsort(names, sizeof_names, sizeof *names, cmp);
    PrintStrs(names, sizeof_names);


    return 0;
}

void PrintInts(const int *integers, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d ", integers[i]);
    }
    printf("\n");
}

void PrintStrs(const char *str[], int len) {
    for (int i = 0; i < len; ++i) {
        printf("%s\n", str[i]);
    }
    printf("\n");
}

int CompareInts(const void *left, const void *right) {
    int int_left = *(const int *) left;
    int int_right = *(const int *) right;

    if (int_left < int_right) {
        return -1;
    } else if (int_right < int_left) {
        return 1;
    } else {
        return 0;
    }
}

int CompareStrs(const void *left, const void *right) {
    char *const *pp1 = left;
    char *const *pp2 = right;

    return strcmp(*pp1, *pp2);
}