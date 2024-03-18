//
// Created by li on 2024/3/18.
//
#include <stdio.h>
#include <stdlib.h>

#include "home_menu.h"
#include "sequence_list_menu.h"

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

#define LINE "******************************************\n"

const char* type[] = {"顺序表", "单链表", "双向链表"};


void HomeMenu(){
    printf("%s", LINE);
    for (int i=0; i<=ARRAY_LENGTH(type) - 1; i++){
        printf("%d.%s \n", i, type[i]);
    }
    printf("%s", LINE);

    int select;
    printf("请选择以上数据类型：");
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

    switch (select) {
        case 0: {
            SequenceListMenu seqMenu = InitSequenceListMenu();
            ShowSequenceListMenu(seqMenu);
            SelectFunction();
        }
    }

}

void PrintLine(){
    printf("%s", LINE);
}