#ifndef QUEUE_HPP_
#define QUEUE_HPP_

typedef struct BiTNode {
    char data;
    BiTNode *lChild, *rChild;
}BiTNode, *BiTree;

typedef struct LinkNode {
    BiTNode *data;
    LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *rear, *front;
}LinkQueue;

//带头结点
void InitQueue(LinkQueue &Q);

bool isEmpty(LinkQueue Q);

void EnQueue(LinkQueue &Q, BiTNode *e);

bool DeQueue(LinkQueue &Q, BiTNode* &e);

#endif // QUEUE_HPP_