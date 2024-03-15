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

DataType GetNodeByIndex(SeqList list, int index){
    if (index < list.length){
        return list.data[index];
    } else {
        printf("下标错误");
    }
}

int GetNodeByData(SeqList list, DataType value){
    int index = -1;
    for(int i=0; i<list.length; i++){
        if (list.data[i] == value){
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

void InsertListByIndex(SeqList *list, int index, DataType value){
    if (index >= list->length){
        list->length += 1;
        list->data[index] = value;
    } else {
        for (int i=list->length;i>index;i--){
            list->data[i] = list->data[i-1];
        }
        list->data[index] = value;
    }
}

void DeleteListByIndex(SeqList *list, int index){
    for (int i=index;i<list->length;i++){
        list->data[i] = list->data[i+1];
    }
}

void DeleteListByData(SeqList *list, DataType data){
    int count = 0;
    int initialLength = list->length;
    for(int i=0; i<initialLength;i++){
        if (count != 0){
            list->data[i] = list->data[i + count];
        }
        if (list->data[i] == data){
            list->length--;
            count++;
        }
    }
}

void UpdateListByIndex(SeqList *list, int index, DataType data){
    list->data[index] = data;
}

void UpdateListByData(SeqList *list, DataType oldData, DataType newData){
    for (int i = 0; i < list->length; i++) {
        if (list->data[i] == oldData){
            list->data[i] = newData;
        }
    }
}

void ShowList(SeqList list){
    printf("{");
    for(int i=0; i<list.length; i++){
        printf("[");
        printf("%d", list.data[i]);
        printf("]");
        if (i != list.length - 1){
            printf(", ");
        }
    }
    printf("}");
    printf("\n");
}

void Converts(SeqList *list){
    DataType temp;
    for (int i = 0; i <= list->length % 2; i++) {
        temp = list->data[i];
        list->data[i] = list->data[list->length - i];
        list->data[list->length - i] = temp;
    }
}

DataType Max(SeqList list){
    DataType result = list.data[0];
    for (int i = 0; i < list.length; i++) {
        if (list.data[i] > result){
            result = list.data[i];
        }
    }
    return result;
}

DataType Min(SeqList list){
    DataType result = list.data[0];
    for (int i = 0; i < list.length; i++) {
        if (list.data[i] < result){
            result = list.data[i];
        }
    }
    return result;
}

void Sort(SeqList *list){
    DataType temp;
    for (int i = 0; i < list->length; i++) {
        for (int j = 0; j < list->length - i - 1; j++) {
            if (list->data[j] > list->data[j + 1]){
                temp = list->data[j];
                list->data[j] = list->data[j + 1];
                list->data[j + 1] = temp;
            }
        }
    }
}