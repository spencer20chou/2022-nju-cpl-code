//
// Created by SpencerC on 2023-04-23.
//
#include <stdio.h>

int main() {
    const double MOL = 6.02e23;
    const int MOL_PER_GRAM_OF_OXYGEN = 32;
    int mass = 6;

    double quantity = mass * 1.0 / 32 * MOL;
    printf("quantity = %.3e\nquantity = %.5g\n", quantity, quantity);

    return 0;
}
