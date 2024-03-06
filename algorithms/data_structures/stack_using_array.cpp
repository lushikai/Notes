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

bool bracketMatch(char str[], int length) {
    SqStack S;
    InitStack(S);
    for (int i = 0; i < length; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            Push(S, str[i]);
        }
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
            if (isEmpty(S)) {return false;}
            char topElem;
            Pop(S,topElem);
            if (str[i] == ')' && topElem != '(') {return false;}
            if (str[i] == ']' && topElem != '[') {return false;}
            if (str[i] == '}' && topElem != '{') {return false;}
        }
    }
    return isEmpty(S);
}

int main() {
    char str[] = "(a+b)*(c-d)";
    int length = sizeof(str) / sizeof(str[0]) - 1;
    bool res = bracketMatch(str, length);

    if (res) {
        std::cout << "success" << std::endl;
    } else {
        std::cout << "fail" << std::endl;
    }

    return 0;
}