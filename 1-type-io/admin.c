//
// Created by SpencerC on 2023-04-23.
//

#include <stdio.h>
#include <math.h>

int main() {
    char first_name[] = "Mike";
    char last_name[] = "Green";
    char gender = 'M';

    int birth_year = 1988;
    int birth_month = 5;
    int birth_day = 6;
    char weekday[] = "Friday";

    int c_score = 50;
    int music_score = 99;
    int medicine_score = 78;
    int rank = 10;

    double mean = (c_score + music_score + medicine_score) / 3.0;
    double sd = sqrt((pow(c_score - mean, 2)
            + pow(music_score - mean, 2)
            + pow(medicine_score - mean, 2)) / 3.0);

    printf("%s %s \t %c\n"
           "%.2d-%.2d-%d \t %.3s.\n"
           "C = %d \t Music = %d \t Medicine = %d\n"
           "Mean = %.1f \t SD = %.2f \t Rank = %d%%\n", first_name, last_name, gender,
           birth_month, birth_day, birth_year, weekday,
           c_score, music_score, medicine_score,
           mean, sd, rank);

    return 0;
}

