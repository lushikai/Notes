/**
 * 链式存储，一个结点存储一个数据元素，各结点先后关系用一个指针表示
 * 不带头结点，头指针L指向的下一个结点是用于存放数据的结点
 * 带头结点，头指针L指向的下一个结点称为头结点，不存放数据，头结点下一个结点才存放数据
 * LinkedList等价于LNode *，前者强调链表，后者强调结点
*/

#include <iostream>
#include <stdlib.h>

namespace linked_list {
namespace singly_linked_list {

typedef struct LNode {
    int data; //数据域
    LNode *next; //指针域
}LNode, *LinkList;

//不带头结点
// bool InitList(LinkList &L) {
//     L = NULL;
//     return true;
// }

// bool isEmpty(LinkList L) {
//     return L == NULL;
// }

// bool Insert(LinkList &L, int i, int e) {
//     if (i < 1) {return false;}
//     if (i == 1) {
//         LNode *s = (LNode*)malloc(sizeof(LNode));
//         s->data = e;
//         s->next = L;
//         L = s;
//         return true;
//     }
//     LNode *p;
//     int j = 1;
//     p = L;
//     while (p != NULL && j < i - 1) {
//         p = p->next;
//         j++;
//     }
//     if (p == NULL) {return false;}
//     LNode *s = (LNode *)malloc(sizeof(LNode));
//     s->data = e;
//     s->next = p->next;
//     p->next = s;
//     return true;
// }

//带头结点
bool InitList(LinkList &L) {
    L = (LNode *) malloc(sizeof(LNode));
    if (L == NULL) {return false;}
    L->next = NULL;
    return true;
}

bool isEmpty(LinkList L) {
    if (L->next == NULL) {return true;}
    else {return false;}
}

//O(n)
bool Insert(LinkList &L, int i, int e) {
    if (i < 1) {return false;}
    LNode *p; //指针p指向当前扫描到的结点
    int j = 0; //当前p指向的是第几个结点
    p = L; //L指向头结点，头结点为第0个结点
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    // if (p == NULL) {return false;}
    // LNode *s = (LNode *) malloc(sizeof(LNode));
    // s->data = e;
    // s->next = p->next;
    // p->next = s;
    // return true;
    return InsertNextNode(p, e);
}

//O(1)
bool InsertNextNode(LNode *p, int e) {
    if (p == NULL) {return false;}
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if (s == NULL) {return false;} //内存分配失败
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

//O(1)
bool InsertPriorNode(LinkList L, LNode *p, int e) {
    if (p == NULL) {return false;}
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if (s == NULL) {return false;}
    s->next = p->next;
    p->next = s;
    s->data = p->data;
    p->data = e;
    return true;
}

//O(n)
bool Delete(LinkList &L, int i, int &e) {
    if (i < 1) {return false;}
    LNode *p;
    int j = 0;
    p = L;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL) {return false;}
    if (p->next == NULL) {return false;}
    LNode *q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

bool DeleteNode(LNode *p) {
    if (p == NULL) {return false;}
    LNode *q = p->next; //q指向*p后继结点
    p->data = p->next->data; //和后继结点交换数据域
    p->next = q->next;
    free(q);
    return true;
}

} // namespace singly_linked_list
} // namespace linked_list

int main() {
    using namespace linked_list::singly_linked_list;
    LinkList L;

    InitList(L);
    std::cout << isEmpty(L);
    Insert(L,1,2);
    Insert(L,2,33);
    Insert(L,3,45);

}