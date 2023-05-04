//
// Created by SpencerC on 2023-05-02.
//

#include <stdio.h>

int StrCmp(const char *s1, const char *s2);

int StrCmpStd(const char *s1, const char *s2);

int StrNCmpStd(const char *s1, const char *s2, int n);

int main() {
    const char *str1 = "Hi, C";
    const char *str2 = "Hi, c";

    printf("StrCmp(\"%s\", \"%s\") = %d\n", str1, str2, StrCmp(str1, str2));

    return 0;
}

int StrCmp(const char *s1, const char *s2) {
    while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
        s1++;
        s2++;
    }

    if (*s1 == '\0' && *s2 == '\0') {
        return 0;
    }

    return (*(const unsigned char *) s1) < (*(const unsigned char *) s2) ? -1 : 1;
}

int StrCmpStd(const char *s1, const char *s2) {
    for (; *s1 == *s2; s1++, s2++) {
        if (*s1 == '\0') {
            return 0;
        }
    }

    return (*(const unsigned char *) s1) < (*(const unsigned char *) s2) ? -1 : 1;
}

int StrNCmpStd(const char *s1, const char *s2, int n) {
    for (; 0 < n; n--, s1++, s2++) {
        if (*s1 != *s2) {
            return (*(const unsigned char *) s1) < (*(const unsigned char *) s2) ? -1 : 1;
        } else if (*s1 == '\0') { // *s1 == *s2 == '\0'
            return 0;
        }
    }

    return 0;
}
