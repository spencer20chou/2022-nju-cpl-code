//
// Created by SpencerC on 2023-05-04.
//
#include <stdio.h>
#include <math.h>

#define NUM_OF_PARTITIONS 100000

double Integrate(double low, double high, double (*fp)(double));

int main() {
    double low = 0.0;
    double high = 1.0;
    double integration = 0.0;

    integration = Integrate(low, high, sin);

    printf("sin = %f\n", integration);

    double (*fps[2])(double) = {sin, cos};
    for (int i = 0; i < 2; ++i) {
        printf("%f\n", Integrate(low, high, fps[i]));
    }

    return 0;
}

double Integrate(double low, double high, double (*fp)(double)) {
    double interval = (high - low) / NUM_OF_PARTITIONS;

    double sum = 0.0;
    for (int i = 0; i < NUM_OF_PARTITIONS; ++i) {
        double x_i = low + interval * i;
        double y_i = fp(x_i);
        sum += y_i * interval;
    }
    return sum;
}