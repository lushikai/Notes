/**
 * 存储结构：
 * lTag==1时，表示lChild指向前驱；lTag==0时，表示lChild指向左孩子
 * rTag==1时，表示rChild指向前驱；rTag==0时，表示rChild指向右孩子
*/

#include <iostream>
#include "binary_tree_node.hpp"

ThreadNode *pre = NULL;

void visit(ThreadNode *q) {
    if (q->lChild == NULL) {
        q->lChild = pre;
        q->lTag = 1;
    }
    else if (pre != NULL && pre->rChild == NULL) {
        pre->rChild = q;
        pre->rTag = 1;
    }
    pre = q;
}

void InThread(ThreadTree T) {
    if (T != NULL) {
        InThread(T->lChild);
        visit(T);
        InThread(T->rChild);
    }
}

int main() {
    
}