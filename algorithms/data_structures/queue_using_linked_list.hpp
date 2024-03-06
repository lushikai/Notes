#ifndef LINKED_QUEUE_HPP_
#define LINKED_QUEUE_HPP_

#include "binary_tree_node.hpp"

typedef struct LinkNode {
    BiTNode *data;
    struct LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *rear, *front;
}LinkQueue;

//带头结点
void InitQueue(LinkQueue &Q);

bool isEmpty(LinkQueue Q);

void EnQueue(LinkQueue &Q, BiTNode *e);

bool DeQueue(LinkQueue &Q, BiTNode* &e);

#endif // LINKED_QUEUE_HPP_