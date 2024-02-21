/**
 * 
*/

#include <iostream>
#include <stdlib.h>

namespace linked_list {
namespace doubly_linked_list {

typedef struct DNode {
    int data;
    DNode *prior, *next;
}DNode, *DLinkList;

//带头结点
bool InitDLinkList(DLinkList &L) {
    L = (DNode *)malloc(sizeof(DNode));
    if (L == NULL) {return false;}
    L->prior = NULL;
    L->next = NULL;
    return true;
}



} // namespace doubly_linked_list
} // namespace linked_list

int main() {
    using namespace linked_list::doubly_linked_list;
    DLinkList L;

    InitDLinkList(L);
}