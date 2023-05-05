//
// Created by SpencerC on 2023-05-05.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum gender {
    MALE, FEMALE
} Gender;

typedef struct score {
    int c_score;
    int java_score;
    int python_score;
} Score;

typedef struct musician {
    char *name;
    Gender gender;
    char *album;

    Score score;
} Musician;

void PrintMusician(const Musician *m);

int CompareMusicians(const void *m1, const void *m2);

int main() {
    printf("sizeof Musician = %zu Byte\n", sizeof(Musician));

    struct musician luo = {
            .name = "luo dayou",
            .gender = MALE,
            .album = "ZhiHuZheYe",
//            .score.c_score = 56,
//            .score.java_score = 83,
//            .score.python_score = 43
            .score = {.c_score = 56, .java_score = 83, .python_score = 43}
    };

    Musician cui = {
            .name = "cui jian",
            .gender = MALE,
            .album = "XinChangZhengLuShangDeYaoGun",
            .score.c_score = 33,
            .score.java_score = 73,
            .score.python_score = 33
    };

    char album[] = "YiKeBuKenMeiSuDeXin";

    Musician zhang = {
            .name = "zhang chu",
            .gender = MALE,
            .album = album,
            .score.c_score = 10,
            .score.java_score = 20,
            .score.python_score = 30
    };

    Musician guo = zhang;

    guo.name = "guo";
    strcpy(guo.album, "YiKeMeiSuDeXin");
    //PrintMusician(&zhang);
    //PrintMusician(&guo);

    Musician musicians[] = {luo, cui, zhang};
    int len = sizeof(musicians) / sizeof(Musician);

    for (int i = 0; i < len; ++i) {
        PrintMusician(musicians + i);
    }

    qsort(musicians, len, sizeof(*musicians), CompareMusicians);
    for (int i = 0; i < len; ++i) {
        PrintMusician(musicians + i);
    }


    return 0;
}

void PrintMusician(const Musician *m) {
    printf("\n%s\t%d\t%s\t%d\t%d\t%d\n",
           m->name,
           m->gender,
           m->album,
           m->score.c_score,
           m->score.java_score,
           m->score.python_score
           );
}

int CompareMusicians(const void *m1, const void *m2) {
    const Musician *m_left = m1;
    const Musician *m_right = m2;

    return strcmp(m_left->album, m_right->album);
}