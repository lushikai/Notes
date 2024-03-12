#ifndef TREE_HPP_
#define TREE_HPP_

#define MAX_TREE_SIZE 100

//双亲表示法
typedef struct {
    char data;
    int parent; //双亲位置域
}PTNode;

typedef struct {
    PTNode nodes[MAX_TREE_SIZE]; //双亲表示
    int n; //结点数
}PTree;

//孩子表示法
struct CTNode {
    int child;
    struct CTNode *next; //下一个孩子
};

typedef struct {
    char data;
    struct CTNode *firstChild;
}CTBox;

typedef struct {
    CTBox nodes[MAX_TREE_SIZE];
    int n, r; //结点数和根的位置
}CTree;

//孩子兄弟表示法
//二叉链式存储
typedef struct CSNode {
    char data;
    struct CSNode *firstChild, *nextSibling; //第一个孩子和右兄弟指针
}CSNode, *CSTree;

#endif // TREE_HPP_