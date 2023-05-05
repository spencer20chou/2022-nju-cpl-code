//
// Created by SpencerC on 2023-05-05.
//
#include <stdlib.h>
#include <stdio.h>
#include "ll.h"


void Init(LinkedList *list) {
    list->head = NULL;
    list->tail = NULL;
}

int GetHeadVal(const LinkedList *list) {
    if (IsEmpty(list)) {
        return -1;
    }

    return list->head->val;
}

void Print(const LinkedList *list){
    if (IsEmpty(list)) {
        return;
    }

    Node *node = list->head;

    do {
        printf("%d ", node->val);
        node = node->next;
    } while (node != list->head);
    printf("\n");
}

bool IsEmpty(const LinkedList *list) {
    return list->head == NULL;
}

bool IsSingleton(const LinkedList *list) {
    return !IsEmpty(list) && list->head == list->tail;
}

void Append(LinkedList *list, int val) {
    Node *node = malloc(sizeof(*node));

    if (node == NULL) {
        printf("Error: malloc failed in Append() !\n");
        return;
    }

    node->val = val;

    if (IsEmpty(list)) {
        list->head = node;
    } else {
        list->tail->next = node;
    }

    list->tail = node;
    list->tail->next = list->head;
}

void Delete(LinkedList *list, Node *prev) {
    if (IsEmpty(list) || IsSingleton(list)) {
        list->head = NULL;
        list->tail = NULL;
    }

    Node *cur = prev->next;
    Node *next = cur->next;
    prev->next = next;

    if (cur == list->head) {
        list->head = next;
    }

    if (cur == list->tail) {
        list->tail = prev;
    }

    free(cur);
}

void Free(LinkedList *list) {
    while (!IsEmpty(list)) {
        Delete(list, list->head);
    }
}