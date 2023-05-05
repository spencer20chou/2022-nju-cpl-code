//
// Created by SpencerC on 2023-05-05.
//
#include <stdio.h>
#include <assert.h>
#include "ll/ll.h"

#define NUM 10

void SitAroundCircle(LinkedList *list, int num);

void KillUntilOne(LinkedList *list);

int GetSurvivor(const LinkedList *list);

int main() {
    LinkedList list;
    Init(&list);

    SitAroundCircle(&list, NUM);
    Print(&list);

    KillUntilOne(&list);
    int survivor = GetSurvivor(&list);
    printf("%d --- %d\n", NUM, survivor);

    Free(&list);

    return 0;
}

void SitAroundCircle(LinkedList *list, int num) {
    for (int i = 1; i <= num; ++i) {
        Append(list, i);
    }
}
void KillUntilOne(LinkedList *list) {
    Node *node = list->head;

    while (!IsSingleton(list)) {
        Delete(list, node);
        node = node->next;
    }
}
int GetSurvivor(const LinkedList *list) {
//    assert(IsSingleton(list));

    return GetHeadVal(list);
}