#ifndef TREE_NODE_
#define TREE_NODE_

typedef struct BiTNode {
    char data;
    struct BiTNode *lChild, *rChild;
}BiTNode, *BiTree;

#endif // TREE_NODE_