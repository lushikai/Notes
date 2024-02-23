/**
 * 逻辑上相邻的元素物理上也相邻
 * 随机访问，可以在O(1)时间内找到第i个元素
 * 存储密度高，每个节点只存储数据元素本身
 * 拓展容量，插入，删除不方便
*/

#include <iostream>
#include <stdlib.h>
#define InitSize 10

namespace sequential_list {
namespace static_allocation {

struct SqList {
    //静态分配
    int data[10];
    int length;
};

void InitList(SqList &L) {
    for (int i = 0; i < 10; i++) {
        L.data[i] = 0;
    }
    L.length = 0;
}

int GetElem(SqList L, int i) {
    return L.data[i - 1];
}

} // namespace static_allocation

namespace dynamic_allocation {

struct SeqList {
    //动态分配
    //动态申请，释放内存空间
    int *data; //指针指向顺序表第一个元素
    int MaxSize;
    int length;
};

void InitList(SeqList &L) {
    L.data = (int *) malloc(sizeof(int) * InitSize);
    L.MaxSize = InitSize;
    L.length = 0;
}

void IncreaseSize(SeqList &L, int len) {
    int *p = L.data;
    L.data = (int *) malloc(sizeof(int) * (L.MaxSize + len));
    for (int i = 0; i < L.length; i++) {
        L.data[i] = p[i];
    }
    L.MaxSize = L.MaxSize + len;
    free(p);
}

//O(n)
bool Insert(SeqList &L, int i, int e) {
    if (L.length >= L.MaxSize) {return false;}
    if (i < 1 || i > L.length + 1) {return false;}
    for (int j = L.length; j >= i; j--){
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

//o(n)
bool Delete(SeqList &L, int i, int &e) {
    if (i < 1 || i > L.length) {return false;}
    e = L.data[i - 1];
    for (int j = i; j < L.length; j++) {
        L.data[j - 1] = L.data[j];
    }
    L.length --;
    return true;
}

//O(1)
int GetElem(SeqList L, int i) {
    return L.data[i - 1];
}

//O(n)
int LocateElem(SeqList L, int e) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e) {
            return i + 1;
        }
    }
    return 0;
}

} // namespace dynamic_allocation
} // namespace sequential_list

int main() {
    using namespace sequential_list::dynamic_allocation;
    SeqList L;
    
    InitList(L);

    Insert(L,1,5);
    Insert(L,2,2);
    Insert(L,3,0);
    Insert(L,2,66);
    for (int i = 0; i < L.length; i++) {
        std::cout << L.data[i] << std::endl;
    }
    std::cout << LocateElem(L,0);
    return 0;

}