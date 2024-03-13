#include <stdio.h>
#include "src/list/sequence_list.h"


#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

// 定义类型常量
const char* type[] = {"1.顺序表\n", "2.单链表\n", "3.双向链表\n"};

void sequence_list_process();

int main() {
    sequence_list_process();
    return 0;
}

void menu(){
    printf("请选择以下数据类型：\n");
    for (int i=0; i<ARRAY_LENGTH(type); i++){
        printf("%s", type[i]);
    }

    char select[] = "";
    scanf("%s", select);

    printf("已选择类型：%s\n", select);
}

void sequence_list_process(){
    SeqList seqList = InitList();
    InsertList(&seqList, 0, 0);
    InsertList(&seqList, 1, 1);
    InsertList(&seqList, 2, 1);
    printf("顺序表共有%d个元素\n", ListLength(seqList));
    for(int i=0; i< ListLength(seqList); i++){
        printf("第%d个元素：%d ->", i, GetNode(&seqList, i));
    }
}

