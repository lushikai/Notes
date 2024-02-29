#include <iostream>

namespace string_using_linked_list {

typedef struct StringNode {
    char ch[4];
    StringNode *next;
}StringNode, *String;

}

int main() {
    using namespace string_using_linked_list;

}