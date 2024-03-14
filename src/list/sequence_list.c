//
// 顺序表
//

#include <stdio.h>
#include "sequence_list.h"

SeqList InitList(){
    SeqList seqList;
    seqList.length = 0;
    return seqList;
}

int ListLength(SeqList list){
    return list.length;
}

DataType GetNode(SeqList *list, int index){
    if (index <= list->length){
        return list->data[index];
    } else {
        printf("下标错误");
    }
}

int LocateNode(SeqList *list, DataType value){
    int index = -1;
    for(int i=0; i<list->length; i++){
        if (list->data[i] == value){
            index = i;
            return index;
        }
    }
    return index;
}

void InsertList(SeqList *list, DataType value){
    list->data[list->length] = value;
    list->length++;
}

void InsertListByIndex(SeqList list, int index, DataType value){
    if (index >= list.length){
        list.length += 1;
        list.data[index] = value;
    } else {
        for (int i=list.length;i>index;i--){
            list.data[i] = list.data[i-1];
        }
        list.data[index] = value;
    }
}

void DeleteList(SeqList list, int index){
    for (int i=index;i<list.length;i++){
        list.data[i] = list.data[i+1];
    }
}

void ShowList(SeqList list){
    for(int i=0; i<list.length; i++){
        printf("[");
        printf("%d", list.data[i]);
        printf("] ");
    }
    printf("\n");
}