#include <iostream>
#include <stdlib.h>

typedef struct LNode {
    int data;
    LNode *next;
}LNode, *LinkList;

bool InitList(LinkList &L) {
    L = (LNode *)malloc(sizeof(LNode));
    if (L == NULL) {return false;}
    L->next = L;
    return true;
}

bool isEmpty(LinkList L) {
    if (L->next == L) {return true;}
    else {return false;}
}

bool isTail(LinkList L, LNode *p) {
    if (p->next == L) {return true;}
    else {return false;}
}


typedef struct DNode {
    int data;
    DNode *prior, *next;
}DNode, *DLinkList;

bool InitDLinkList(DLinkList &L) {
    L = (DNode *)malloc(sizeof(DNode));
    if (L== NULL) {return false;}
    L->prior = L;
    L->next = L;
    return true;
}

bool isEmpty(DLinkList L) {
    if (L->next == L) {return true;}
    else {return false;}
}

bool isTail(DLinkList L, DNode *p) {
    if (p->next == L) {return true;}
    else {return false;}
}


int main() {

    LinkList L;
    InitList(L);
}