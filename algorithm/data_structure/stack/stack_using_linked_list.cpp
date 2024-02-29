#include <iostream>

namespace stack_using_linked_list {

typedef struct LinkNode {
    int data;
    LinkNode *next;
}*LinkStack;

} // namespace stack_using_linked_list

int main() {
    using namespace stack_using_linked_list;
    LinkStack S;
}