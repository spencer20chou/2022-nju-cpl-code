//
// Created by SpencerC on 2023-04-30.
//

#include <stdio.h>
#include <limits.h>

int main() {
    int num = 1000000000;
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    //long long llint = num * num;
    //long long llint = (long long) (num * num);
    long long llint = (long long) num * num;
    printf("llint = %lld\n", llint);

    return 0;
}

