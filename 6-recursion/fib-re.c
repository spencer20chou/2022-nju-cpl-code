//
// Created by SpencerC on 2023-04-29.
//

#include <stdio.h>

long long Fib(int n);

int main() {
    int n;
    scanf("%d", &n);

    printf("%lld\n", Fib(n));

    return 0;
}

long long Fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return Fib(n - 1) + Fib(n - 2);
}
