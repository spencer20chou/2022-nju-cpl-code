//
// Created by SpencerC on 2023-04-24.
//

#include <stdio.h>

int main() {
    int lines;
    scanf("%d", &lines);

    for (int i = 0; i < lines; ++i) {
        for (int j = 0; j < lines - 1 - i; ++j) {
            printf(" ");
        }

        for (int k = 0; k < 2 * i + 1; ++k) {
            printf("*");
        }

        if (i < lines - 1){
            printf("\n");
        }
    }

    return 0;
}

