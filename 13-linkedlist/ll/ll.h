//
// Created by SpencerC on 2023-05-05.
//

#ifndef INC_2022_NJU_CPL_CODE_LL_H
#define INC_2022_NJU_CPL_CODE_LL_H

#include <stdbool.h>

typedef struct node {
    int val;
    struct node *next;
} Node;

typedef struct ll {
    Node *head;
    Node *tail;
} LinkedList;

void Init(LinkedList *list);

int GetHeadVal(const LinkedList *list);

Node *Search(const LinkedList *list, int val);

void Print(const LinkedList *list);

bool IsEmpty(const LinkedList *list);

bool IsSingleton(const LinkedList *list);

void Append(LinkedList *list, int val);

void Insert(LinkedList *list, Node *prev, int val);

void Delete(LinkedList *list, Node *prev);

void Free(LinkedList *list);

#endif //INC_2022_NJU_CPL_CODE_LL_H
