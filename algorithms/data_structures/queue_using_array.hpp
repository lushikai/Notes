#ifndef QUEUE_HPP_
#define QUEUE_HPP_

#define MaxSize 10

typedef struct {
    int data[MaxSize];
    int front, rear;
}SqQueue;

void InitQueue(SqQueue &Q);

bool isEmpty(SqQueue Q);

bool EnQueue(SqQueue &Q, int e);

bool DeQueue(SqQueue &Q, int &e);

bool GetHead(SqQueue Q, int &e);

#endif // QUEUE_HPP_