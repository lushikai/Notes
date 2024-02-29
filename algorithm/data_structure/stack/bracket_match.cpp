#include "stack_using_array.hpp"

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