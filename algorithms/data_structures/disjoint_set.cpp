#include <iostream>
#include "tree.hpp"
#define SIZE 15

int UFSets[SIZE];

void Initial(int S[]) {
    for (int i = 0; i < SIZE; i++) {
        S[i] = -1;
    }
}

//O(n)
int Find(int S[], int x) {
    while(S[x] >= 0) {
        x = S[x];
    }
    return x;
}

//压缩路径
//先找到根结点，再将查找路径所有结点挂到根结点下
int find(int S[], int x) {
    int root = x;
    while (S[root] >= 0) {
        root = S[root];
    }
    while (x != root) {
        int tmp = S[x];
        S[x] = root;
        x = tmp;
    }
    return root;
}

//O(1)
//小树并大树
//新树不超过log2n + 1
void Union(int S[], int Root1, int Root2) {
    if (Root1 == Root2) {return;}
    if (S[Root2] > S[Root1]) {
        S[Root1] += S[Root2];
        S[Root2] = Root1;
    }
    else {
        S[Root2] += S[Root1];
        S[Root1] = Root2;
    }
}

int main() {

}