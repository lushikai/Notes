/**
 * 逻辑上相邻的元素物理上也相邻
 * 随机访问，可以在O(1)时间内找到第i个元素
 * 存储密度高，每个节点只存储数据元素本身
 * 拓展容量，插入，删除不方便
*/

#include <iostream>
#include <stdlib.h>
#define InitSize 10

namespace linked_list {
namespace sequential_list {

class SqList{
    public:
        //静态分配
        int data[10];
        int length;
    public:
        void InitList(SqList &L);
};

void SqList::InitList(SqList &L) {
    for (int i = 0; i < 10; i++) {
        L.data[i] = 0;
    }
    L.length = 0;
}

class SeqList {
    public:
        //动态分配
        //动态申请，释放内存空间
        int *data; //指针指向顺序表第一个元素
        int MaxSize;
        int length;
    public:
        void InitList(SeqList &L);
        void IncreaseSize(SeqList &L, int len);
        bool Insert(SeqList &L, int i, int e);
};

void SeqList::InitList(SeqList &L) {
    L.data = (int *) malloc(sizeof(int) * InitSize);
    L.MaxSize = InitSize;
    L.length = 0;
}

void SeqList::IncreaseSize(SeqList &L, int len) {
    int *p = L.data;
    L.data = (int *) malloc(sizeof(int) * (L.MaxSize + len));
    for (int i = 0; i < L.length; i++) {
        L.data[i] = p[i];
    }
    L.MaxSize = L.MaxSize + len;
    free(p);
}

bool SeqList::Insert(SeqList &L, int i, int e) {
    if (L.length >= L.MaxSize) {
        return false;
    }
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    for (int j = L.length; j >= i; j--){
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}


} // namespace sequential_list
} // namespace linked_list

int main() {
    linked_list::sequential_list::SeqList L;
    L.InitList(L);
    L.Insert(L,1,5);
    L.Insert(L,2,2);
    L.Insert(L,3,0);
    L.Insert(L,2,66);

    for (int i = 0; i < L.length; i++) {
        std::cout << L.data[i] << std::endl;
    }
    return 0;

}