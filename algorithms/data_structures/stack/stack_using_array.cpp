/**
 * 后进先出 LIFO
 * n个不同元素进栈，出栈元素不同排列的个数为[1/(n+1)]*C(2n,n)
*/

#include <iostream>
#include "stack_using_array.hpp"

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

int main () {
    SqStack S;
    InitStack(S);
}