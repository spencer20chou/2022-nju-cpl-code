//
// Created by SpencerC on 2023-04-29.
//

#include <stdio.h>

int GCD(int a, int b);

int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);

    printf("GCD(%d, %d) = %d\n", a, b, GCD(a, b));

    return 0;
}

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }

    return GCD(b, a % b);
}

