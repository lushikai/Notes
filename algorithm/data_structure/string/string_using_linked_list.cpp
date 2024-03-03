#include <iostream>

namespace string_using_linked_list {

typedef struct StringNode {
    char ch[4];
    StringNode *next;
}StringNode, *String;

} // namespace string_using_linked_list

int main() {
    using namespace string_using_linked_list;

}