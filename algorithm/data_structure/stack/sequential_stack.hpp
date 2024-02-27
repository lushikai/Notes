/**
 * 后进先出 LIFO
 * n个不同元素进栈，出栈元素不同排列的个数为[1/(n+1)]*C(2n,n)
*/

#ifndef SEQUENTIAL_STACK_HPP_
#define SEQUENTIAL_STACK_HPP_

#include <iostream>
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

void InitStack(SqStack &S) {
    S.top = -1;
}

bool isEmpty(SqStack S) {
    return S.top == -1;
}

bool Push(SqStack &S, char e) {
    if (S.top == MaxSize - 1) {return false;}
    // S.top += 1;
    // S.data[S.top] = e;
    S.data[++S.top] = e;
    return true;
}

bool Pop(SqStack &S, char &e) {
    if (isEmpty(S)) {return false;}
    // e = S.data[S.top];
    // S.top -= 1;
    e = S.data[S.top--];
    return true;
}

bool GetTop(SqStack S, char &e) {
    if (isEmpty(S)) {return false;}
    e = S.data[S.top];
    return true;
}

#endif // SEQUENTIAL_STACK_HPP_