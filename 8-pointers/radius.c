//
// Created by SpencerC on 2023-04-30.
//
#include <stdio.h>

int main() {
    int radius1 = 100;
    printf("radius1 = %d\n", radius1);
    printf("The address of radius1 is %p\n", &radius1);

    int *ptr_radius1 = &radius1;
    printf("The address of ptr_radius1 is %p\n", &ptr_radius1);

    *ptr_radius1 = 1;
    printf("radius1 = %d\n", radius1);

    int radius2 = *ptr_radius1;
    printf("radius2 = %d\n", radius2);

    int radius3 = 1000;
    int *ptr_radius3 = &radius3;
    ptr_radius1 = ptr_radius3;
    printf("radius1 = %d\n", *ptr_radius1);

    return 0;
}
