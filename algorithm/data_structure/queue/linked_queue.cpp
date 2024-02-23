#include <iostream>
#include <stdlib.h>

namespace queue {
namespace linked_queue {

typedef struct LinkNode {
    int data;
    LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *rear, *front;
}LinkQueue;

//不带头结点
// void InitQueue(LinkQueue &Q) {
//     Q.front = NULL;
//     Q.rear = NULL;
// }

// bool isEmpty(LinkQueue Q) {
//     if (Q.front == NULL) {return true;}
//     else {return false;}
// }

// void EnQueue(LinkQueue &Q, int e) {
//     LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
//     s->data = e;
//     s->next = NULL;
//     if (Q.front == NULL) {
//         Q.front = s;
//         Q.rear = s;
//     }
//     else {
//         Q.rear->next = s;
//         Q.rear = s;
//     }
// }

//带头结点
void InitQueue(LinkQueue &Q) {
    Q.front = Q.rear = (LinkNode *)malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

bool isEmpty(LinkQueue Q) {
    if (Q.front == Q.rear) {return true;}
    else {return false;}
}

bool EnQueue(LinkQueue &Q, int e) {
    LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
    s->data = e;
    s->next = NULL;
    Q.rear->next = s;
    Q.rear = s;
}

bool DeQueue() {

}


} // namespace linked_queue
namespace xxx {

}
} // namespace queue

int main() {
    using namespace queue;

}
