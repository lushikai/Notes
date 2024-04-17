/**
 * 对于无向图：无向图的全部顶点的度的和 = 边数的2倍
 * 对于有向图：顶点v的度 = 其入度和出度之和，TD(v) = ID(v) + OD(v)
 * 简单路径/回路：顶点不重复
 * 点到点的距离：最短路径，若不存在路径，则为无穷
 * 
 * 无向图中：
 * 若v到w有路径存在，则称v,w是连通的；若任意两顶点都是连通的，则称为连通图
 * 对于n个顶点的无向图G，若G是连通图，则最少有n-1条边
 * 无向图中的极大连通子图称为连通分量（子图必须连通，且包含尽可能多的顶点和边）
 * 
 * 有向图中：
 * 若v到w和w到v都有路径存在，则称两顶点是强连通的；若任一对顶点是强连通的，则称为强连通图
 * 对于n个顶点的有向图G，若G是强连通图，则最少有n条边
 * 有向图中的极大强连通子图称为强连通分量（子图必须强连通，同时保留尽可能多的边）
 * 
 * 生成树：
 * 无向连通图的生成树是包含图中全部顶点的一个极小连通子图
 * 在非连通无向图中，连通分量的生成树构成生成森林
 * 
 * 无向完全图：无向图中任意两个顶点之间都存在边
 * 有向完全图：有向图中任意两个顶点之间都存在方向相反的两弧
 * 
 * 树：不存在回路，且连通的无向图，n个顶点的树，必有n-1条边
 * n个顶点的图，若|E|>n-1，则一定有回路
 * 有向树：一个顶点入度为0，其余顶点的入度均为1的有向图
*/

#include <iostream>
#include "queue_using_array.hpp"
#define MaxVertexNum 100
#define MAX_VERTEX_NUM false

// 邻接矩阵存储：对称矩阵
// 无向图求度：第i个结点的度 = 第i行或第i列的非零元素个数
// 有向图求度：第i个结点的出度 = 第i行的非零元素个数；
//            第i个结点的入度 = 第i列的非零元素个数；
//            第i个结点的度 = 第i行，第i列的非零元素个数之和
// 空间复杂度：O(|V|^2)，只和顶点数有关，与实际边数无关

typedef struct {
    char Vex[MaxVertexNum]; //顶点
    int Edge[MaxVertexNum][MaxVertexNum]; //邻接矩阵
    int vexNum, arcNum; //图当前顶点数和边数
}MGraph;

// 邻接表法
// 空间复杂度：无向图O(|V|+2|E|)，有向图O(|V|+|E|)

//边
typedef struct ArcNode {
    int adjVex; //边指向哪个结点
    struct ArcNode *next; //指向下一条边或弧
}ArcNode;

//顶点
typedef struct VNode {
    char data;
    ArcNode *first; //第一条边
}VNode, AdjList[MaxVertexNum];

//图
typedef struct {
    AdjList vertices;
    int vexNum, arcNum;
}ALGraph;

// 十字链表用于存储有向图
// O(|V|+|E|)

// 邻接多重表存储无向图
// O(|V|+|E|)

bool visited[MAX_VERTEX_NUM]; //访问标记数组

// void visit(int v) {

// }

//找到与一个顶点相邻的所有顶点
//标记被访问过的顶点
//辅助队列

//邻接矩阵BFS
//时间复杂度O(|V|^2)
// void BFS(MGraph G, int v) {
//     visit(v);
//     visited[v] = true;
//     EnQueue(Q, v);
//     while (!isEmpty(Q)) {
//         DeQueue(Q, v);
//         for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v ,w)) {
//             if (!visited[w]) {
//                 visit(w);
//                 visited[w] = true;
//                 EnQueue(Q, w);
//             }
//         }
//     }
// }

//非连通图
// void BFSTraverse(MGraph G) {
//     for (int i = 0; i < G.vexNum; ++i) {
//         visited[i] = false;
//     }
//     InitQueue(Q);
//     for (int i = 0; i < G.vexNum; ++i) {
//         if (!visited[i]) {
//             BFS(G, i);
//         }
//     }
// }

//时间复杂度=访问各结点所需时间+探索各条边所需时间
//O(|V|^2)

// void DFS(MGraph G, int v) {
//     visit(v);
//     visited[v] = true;
//     for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v ,w)) {
//         if (!visited[w]) {
//             DFS(G, w);
//         }
//     }
// }

//非连通图
// void DFSTraverse(MGraph G) {
//     for (v = 0; v < G.vexNum; ++v) {
//         visited[v] = false;
//     }
//     for (v = 0; v < G.vexNum; ++v) {
//         if (!visited[v]) {
//             DFS(G, v);
//         }
//     }
// }

