//
// Created by SpencerC on 2023-04-22.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int HIGH = 100;
    int num_of_tries = 7;
    /*
     * (1) print the rules of the game to players
     */
    printf("Let's play the Guess the Number Game!\n"
           "The computer will generate a number between 1 and %d.\n"
           "You have %d tries.\n", HIGH, num_of_tries);

    /*
     * (2) generate a random number between 1 and HIGH as the secret number
     */
    srand(time(NULL));
    int secret = rand() % HIGH + 1;

    /*
     * (3) ask the player to input a guess
     */
//    printf("Please input your guess: (You have %d tries left)\n", num_of_tries);

    /*
     * (4) obtain the guessed number, compare it with the secret number, and inform the player of the result
     */
    int guess = 0;
    while (num_of_tries > 0) {
        printf("Please input your guess: (You have %d tries left)\n", num_of_tries);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("You win!\n");
            break;
        } else if (guess > secret) {
            printf("guess > secret\n");
        } else {
            printf("guess < secret\n");
        }

    /*
     * repeat (3)-(4) until the player wins or loses
     */
        num_of_tries--;

        if(num_of_tries == 0 && guess != secret) {
            printf("Sorry, you lose!\n");
        }
    }

    return 0;
}