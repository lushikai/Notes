#ifndef STACK_HPP_
#define STACK_HPP_

#define MaxSize 10

typedef struct {
    char data[MaxSize];
    int top;
}SqStack;

//共享栈
typedef struct {
    int data[MaxSize];
    int top0;
    int top1;
}ShStack;

void InitStack(SqStack &S);

bool isEmpty(SqStack S);

bool Push(SqStack &S, char e);

bool Pop(SqStack &S, char &e);

bool GetTop(SqStack S, char &e);

#endif // STACK_HPP_