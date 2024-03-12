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

//O(1)
//小树并大树
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