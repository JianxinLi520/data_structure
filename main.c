#include <stdio.h>
#include <stdlib.h>

#include "src/list/sequence_list.h"


#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

#define LINE "******************************************\n"

// 定义类型常量
const char* type[] = {"顺序表\n", "单链表\n", "双向链表\n"};

const char* sqe_list_menu[] = {"返回顺序表数量\n","在列表尾部插入元素\n", "按指定位置插入元素\n","删除元素\n"};


void sqe_list_menu_fun();

int main() {
    sqe_list_menu_fun();
    return 0;
}

void menu(){
    printf("%s", LINE);
    printf("请选择以下数据类型：\n");
    printf("%s", LINE);
    for (int i=0; i<ARRAY_LENGTH(type) - 1; i++){
        printf("%d.%s", i, type[i]);
    }

    int select;
    scanf("%d", &select);

    for (;;){
        if (select >= ARRAY_LENGTH(type)){
            printf("类型选择错误，请重新输入\n");
            scanf("%d", &select);
        } else {
            break;
        }
    }

    printf("已选择类型：%d\n", select);

}

void sqe_list_menu_fun(){
    SeqList seqList = InitList();
    int select;
    int index;
    DataType value;

    for (;;){
        system("clear");
        printf("请执行以下操作：\n");
        for (int i=0; i<ARRAY_LENGTH(sqe_list_menu); i++){
            printf("%d.%s", i, sqe_list_menu[i]);
        }
        scanf("%d", &select);
        if (select == 999){
            break;
        }
        switch (select) {
            case 0:
                printf("共有元素：%d 个\n", ListLength(seqList));
                break;
            case 1:
                printf("请输入插入值：\n");
                scanf("%d", &value);
                InsertList(&seqList, value);
                break;
            case 2:
                printf("请输入插入位置：\n");
                scanf("%d", &index);
                printf("请输入插入值：\n");
                scanf("%d", &value);
                InsertListByIndex(seqList, index, value);
                break;
            case 3:
                printf("请输入元素位置：\n");
                scanf("%d", &index);
                DeleteList(seqList, index);
                break;
        }
        ShowList(seqList);
    }
}


