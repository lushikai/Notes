#ifndef BINARY_TREE_NODE_
#define BINARY_TREE_NODE_

typedef struct BiTNode {
    char data;
    struct BiTNode *lChild, *rChild;
}BiTNode, *BiTree;

typedef struct ThreadNode {
    char data;
    struct ThreadNode *lChild, *rChild;
    int lTag, rTag; //左右线索
}ThreadNode, *ThreadTree;


#endif // BINARY_TREE_NODE_