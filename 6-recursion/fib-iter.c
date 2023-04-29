//
// Created by SpencerC on 2023-04-29.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long fib0 = 1;
    long long fib1 = 1;
    printf("%lld %lld ", fib0, fib1);
    
    long long fib2 = 0;
    for (int i = 2; i <= n; ++i) {
        fib2 = fib0 + fib1;
        printf("%lld ", fib2);
        fib0 = fib1;
        fib1 = fib2;
    }

    return 0;
}

