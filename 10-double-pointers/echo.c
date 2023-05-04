//
// Created by SpencerC on 2023-05-04.
//
#include <stdio.h>

int main(int argc, char *argv[]) {
//    for (int i = 1; i < argc; ++i) {
//        printf("%s\n", argv[i]);
//    }

    for (char **ptr = argv + 1; *ptr != NULL; ptr++) {
        printf("%s\n", *ptr);
    }

    return 0;
}