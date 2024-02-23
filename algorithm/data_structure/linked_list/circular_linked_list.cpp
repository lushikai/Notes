#include <iostream>
#include <stdlib.h>

namespace circular_linked_list {
namespace singly_lined_list {

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

} // namespace singly_lined_list

namespace doubly_linked_list {

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

} // namespace doubly_linked_list
} // namespace circular_linked_list

int main() {
    using namespace circular_linked_list::singly_lined_list;

    LinkList L;
    InitList(L);
}