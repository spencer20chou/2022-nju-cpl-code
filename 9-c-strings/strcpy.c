//
// Created by SpencerC on 2023-05-01.
//
#include <stdio.h>
#include <string.h>

void StrCpy1(char *dest, const char *src);

void StrCpy2(char *dest, const char *src);

void StrCpy3(char *dest, const char *src);

void StrCpy4(char *dest, const char *src);

void StrCpy5(char *dest, const char *src);

void StrCpy6(char *dest, const char *src);

char *StrCpyStd(char *dest, const char *src);

int main() {
    const char *src = "Hello World";
    char dest[strlen(src) + 1];

    StrCpy6(dest, src);
    strlen(dest);
    printf("dest = %s\n", dest);

    char dest1[strlen(src) + 1];
    strlen(StrCpyStd(dest1, src));
    printf("dest1 = %s\n", dest1);

    return 0;
}

void StrCpy1(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void StrCpy2(char *dest, const char *src) {
    int i = 0;
    while ((dest[i] = src[i]) != '\0') {
        i++;
    }
}

void StrCpy3(char *dest, const char *src) {
    int i = 0;
    while ((*(dest + i) = *(src + i)) != '\0') {
        i++;
    }
}

void StrCpy4(char *dest, const char *src) {
    while ((*dest = *src) != '\0') {
        src++;
        dest++;
    }
}

void StrCpy5(char *dest, const char *src) {
    while ((*dest++ = *src++) != '\0');
}

// NOT recommended!
void StrCpy6(char *dest, const char *src) {
    //while ((*dest++ = *src++) != 0);
    while (*dest++ = *src++);
}

char *StrCpyStd(char *dest, const char *src) {
    for (char *s = dest; (*s++ = *src++) != '\0';);
    return dest;
}