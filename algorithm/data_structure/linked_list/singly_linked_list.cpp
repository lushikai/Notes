/**
 * 
*/

#include <iostream>

namespace linked_list {
namespace singly_linked_list {

typedef struct LNode {
    int data; //数据域
    LNode *next; //指针域
}LNode, *LinkList;


bool InitList(LinkList &L) {
    L = NULL;
    return true;
}

bool isEmpty(LinkList L) {
    return L == NULL;
}


} // namespace singly_linked_list
} // namespace linked_list

int main() {
    linked_list::singly_linked_list::LinkList L;

    InitList(L);

}