/**
 * 存储结构：
 * lTag==1时，表示lChild指向前驱；lTag==0时，表示lChild指向左孩子
 * rTag==1时，表示rChild指向前驱；rTag==0时，表示rChild指向右孩子
 * 对应tag位为0时，表示指针指向其孩子
 * 对应tag位为1时，表示指针为线索
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

void PreThread(ThreadTree T) {
    if (T != NULL) {
        visit(T);
        if (T->lTag == 0) {
            PreThread(T->lChild);
        }
        PreThread(T->rChild);
    }
}

//中序线索化二叉树
void CreateInThread(ThreadTree T) {
    pre = NULL;
    if (T != NULL) {
        InThread(T);
        if (pre->rChild == NULL) {
            pre->rTag = 1;
        }
    }
}

void CreatePreThread(ThreadTree T) {
    pre = NULL;
    if (T != NULL) {
        PreThread(T);
        if (pre->rChild == NULL) {
            pre->rTag = 1;
        }
    }
}

// void InThread(ThreadTree p, ThreadTree &pre) {
//     if (p != NULL) {
//         InThread(p->lChild, pre);
//         if (p->lChild == NULL) {
//             p->lChild = pre;
//             p->lTag = 1;
//         }
//         if (pre != NULL && pre->rChild == NULL) {
//             pre->rChild = p;
//             pre->rTag = 1;
//         }
//         pre = p;
//         InThread(p->rChild, pre);
//     }
// }

int main() {
    
}