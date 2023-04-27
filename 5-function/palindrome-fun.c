//
// Created by SpencerC on 2023-04-27.
//

#include <stdio.h>
#include <stdbool.h>

#define LEN 21
char string[LEN] = "";

bool IsPalindrome(const char str[], int len);

int main() {
    scanf("%20s", string);

    int len;
    while (string[len] != '\0') {
        len++;
    }

    printf("\"%s\" is%s a palindrome.\n", string, IsPalindrome(string, len) ? "" : " not");

    return 0;
}

bool IsPalindrome(const char str[], int len) {
    bool is_palindrome = true;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return false;
        }
    }

    return true;
}
