//
// Created by SpencerC on 2023-05-01.
//
#include <stdio.h>

int StrLen(const char *s);

size_t StrLenStd(const char *s);

int main() {
    char msg[20] = "Hello World!";
    printf("%s\n", msg);
    msg[0] = 'h';
    printf("%s\n", msg);

    printf("StrLen(%s) = %d\n", msg, StrLen(msg));

    printf("StrLenStd(%s) = %d\n", msg, StrLenStd(msg));
    char *ptr_msg = "Hello World!";
    printf("%s\n", ptr_msg);
    ptr_msg[0] = 'h';

    // interrupted by signal 11: SIGSEGV
    // SIG: signal; SEGV: segmentation violation
    printf("%s\n", ptr_msg);

    return 0;
}

int StrLen(const char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

size_t StrLenStd(const char *s) {
    const char *sc;
    for (sc = s; *sc != '\0'; sc++);

    return (sc - s);
}