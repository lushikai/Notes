#include <iostream>

namespace stack {
namespace linked_stack {

typedef struct LinkNode {
    int data;
    LinkNode *next;
}*LinkStack;

} // namespace linked_stack
} // namespace stack

int main() {
    using namespace stack::linked_stack;
    LinkStack S;
}