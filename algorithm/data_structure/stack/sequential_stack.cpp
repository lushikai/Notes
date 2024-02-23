/**
 * 后进先出 LIFO
 * n个不同元素进栈，出栈元素不同排列的个数为[1/(n+1)]*C(2n,n)
*/

#include <iostream>
#define MaxSize 10

namespace sequential_stack {

typedef struct {
    int data[MaxSize];
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
    if (S.top == -1) {return true;}
    else {return false;}
}

bool Push(SqStack &S, int e) {
    if (S.top == MaxSize - 1) {return false;}
    // S.top += 1;
    // S.data[S.top] = e;
    S.data[++S.top] = e;
    return true;
}

bool Pop(SqStack &S, int &e) {
    if (S.top == -1) {return false;}
    // e = S.data[S.top];
    // S.top -= 1;
    e = S.data[S.top--];
    return true;
}

bool GetTop(SqStack S, int &e) {
    if (S.top == -1) {return false;}
    e = S.data[S.top];
    return true;
}

} // namespace sequential_stack

int main() {
    using namespace sequential_stack;

    SqStack S;
    InitStack(S);

    Push(S,5);
    Push(S,2);
    Push(S,0);

    
}