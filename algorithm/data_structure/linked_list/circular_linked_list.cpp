#include <iostream>
#include <stdlib.h>

namespace linked_list {
namespace circular_linked_list {

//单链表
typedef struct LNode {
    int data;
    LNode *next;
}LNode, *LinkList;

//双链表
typedef struct DNode {
    int data;
    DNode *prior, *next;
}DNode, *DLinkList;

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

} // namespace circular_linked_list
} // namespace linked_list

int main() {
    using namespace linked_list::circular_linked_list;

    LinkList L;
    InitList(L);
}