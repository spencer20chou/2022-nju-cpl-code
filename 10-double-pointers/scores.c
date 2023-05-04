//
// Created by SpencerC on 2023-05-04.
//
#include <stdio.h>
#include <stdlib.h>

#define COLS 3

// int table[][COLS] : int (*table)[COLS]
void Print(int table[][COLS], int rows);

int main() {
    int rows = 0;
    printf("Please input the number of students:\n");
    scanf("%d", &rows);

    int (*scores)[COLS] = malloc(rows * COLS * sizeof *scores);
    if (scores == NULL) {
        return 0;
    }

    printf("Please input the scores of these students:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < COLS; ++j) {
            scanf("%d", &scores[i][j]);
        }
        printf("\n");
    }
    Print(scores, rows);

    int (*ptr_scores)[COLS] = scores;
    printf("%d\n", *(*(ptr_scores + 1) + 2));

    free(scores);

    return 0;
}

void Print(int table[][COLS], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < COLS; ++j) {
            // table[i][j] : *(*(table + i) + j)
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
}