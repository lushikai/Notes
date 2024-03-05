/**
 * 结点数=总度数+1
 * 满二叉树：只有最后一层有叶子结点；不存在度为1的结点；按层序从1开始遍历，结点i左孩子为2i，右孩子为2i+1，父结点为[i/2]
 * 完全二叉树：只有最后两层可能有叶子结点；最多只有一个度为1的结点；i<=[n/2]为分支结点，i>[n/2]为叶子结点
 * 二叉排序树：左子树上所有结点的值均小于根结点的值，右子树上所有结点的值均大于根结点的值；左右子树又各为二叉排序树
 * 平衡二叉树：树上任一结点的左右子树的深度之差不超过1
 * 设非空二叉树中度为0，1，2的结点个数分别为n0，n1，n2，则n0 = n2 + 1 (叶子结点比二分支结点多一个)
 * 对于完全二叉树，可以由结点总数n推出n0，n1，n2
 * 若完全二叉树有2k个结点，则必有n1=1，n0=k，n2=k-1
 * 若完全二叉树有2k-1个结点，则必有n1=0，n0=k，n2=k-1
*/

#include <iostream>
#include <stdlib.h>
#include "../queue/queue_using_linked_list.hpp"
    
char visit(BiTree T) {
    return T->data;
}

//O(h)
void PreOrder(BiTree T) {
    if (T != NULL) {
        visit(T);
        PreOrder(T->lChild);
        PreOrder(T->rChild);
    }
}

void InOrder(BiTree T) {
    if (T != NULL) {
        PreOrder(T->lChild);
        visit(T);
        PreOrder(T->rChild);
    }
}

void PostOrder(BiTree T) {
    if (T != NULL) {
        PreOrder(T->lChild);
        PreOrder(T->rChild);
        visit(T);
    }
}

void LevelOrder(BiTree T) {
    LinkQueue Q;
    InitQueue(Q);
    BiTree p;
    EnQueue(Q, T);
    while (!isEmpty(Q)) {
        DeQueue(Q, p);
        visit(p);
        if (p->lChild != NULL) {
            EnQueue(Q, p->lChild);
        }
        else if (p->rChild != NULL) {
            EnQueue(Q, p->rChild);
        }
    }
}

int Depth(BiTree T) {
    if (T == NULL) {return 0;}
    else {
        int l = Depth(T->lChild);
        int r = Depth(T->rChild);
        return l > r ? l+1 : r+1;
    }
}

int main() {
    BiTree root = NULL;

    //插入根结点
    root = (BiTree) malloc(sizeof(BiTNode));
    root->data = {1};
    root->lChild = NULL;
    root->rChild = NULL;

    //插入新结点
    BiTNode *p = (BiTNode *)malloc(sizeof(BiTNode));
    p->data = {2};
    p->lChild = NULL;
    p->rChild = NULL;
    root->lChild = p;
    
    
}
