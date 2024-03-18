//
// Created by li on 2024/3/18.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "sequence_list_menu.h"
#include "home_menu.h"

SequenceListMenu InitSequenceListMenu(){
    SequenceListMenu sequenceListMenu;
    sequenceListMenu.menuCount = SequenceFunctionCount;
    strcpy(sequenceListMenu.functionName[0], "初始化顺序表");
    strcpy(sequenceListMenu.functionName[1], "获取表长");
    strcpy(sequenceListMenu.functionName[2], "根据下标获取元素");
    strcpy(sequenceListMenu.functionName[3], "根据元素获取下标");
    strcpy(sequenceListMenu.functionName[4], "直接插入");
    strcpy(sequenceListMenu.functionName[5], "指定位置插入");
    strcpy(sequenceListMenu.functionName[6], "按下标删除");
    strcpy(sequenceListMenu.functionName[7], "按元素删除");
    strcpy(sequenceListMenu.functionName[8], "按下标修改");
    strcpy(sequenceListMenu.functionName[9], "按元素修改");
    strcpy(sequenceListMenu.functionName[10], "显示列表");
    strcpy(sequenceListMenu.functionName[11], "逆置表");
    strcpy(sequenceListMenu.functionName[12], "获取最大值");
    strcpy(sequenceListMenu.functionName[13], "获取最小值");
    strcpy(sequenceListMenu.functionName[14], "排序");
    return sequenceListMenu;
}

void ShowSequenceListMenu(SequenceListMenu sequenceListMenu){
    PrintLine();
    printf("%s", "顺序表：\n");
    for (int i = 1; i < sequenceListMenu.menuCount; i++) {
        printf("%d.%s \n", i, sequenceListMenu.functionName[i]);
    }
    printf("\n");
}

void SelectFunction(SequenceListMenu sequenceListMenu){
    SeqList seqList = InitList();
    for (;;) {
        system("clear");
        ShowSequenceListMenu(sequenceListMenu);
        PrintLine();
        printf("当前顺序表：");
        ShowList(seqList);
        PrintLine();
        printf("%s", "请选择以上功能(999退出)：");
        int selectFunction;
        scanf("%d", &selectFunction);
        if (selectFunction == 999){
            break;
        }
        if (selectFunction <0 || selectFunction >= SequenceFunctionCount){
            printf("输入错误");
        }
        int index;
        DataType data;
        int oldIndex;
        DataType oldData;
        switch (selectFunction) {
            case 1:
                // 获取顺序表长度
                printf("%d", ListLength(seqList));
                break;
            case 2:
                // 根据下标获取元素
                printf("请输入下标：");
                scanf("%d", &index);
                printf("%d", GetNodeByIndex(seqList, index));
                break;
            case 3:
                // 根据元素获取下标
                printf("请输入元素：");
                scanf("%d", &data);
                printf("%d", GetNodeByData(seqList, data));
                break;
            case 4:
                // 直接插入
                printf("请输入元素：");
                scanf("%d", &data);
                InsertList(&seqList, data);
                break;
            case 5:
                // 按位置插入
                printf("请输入下标：");
                scanf("%d", &index);
                printf("\n");
                printf("请输入元素：");
                scanf("%d", &data);
                InsertListByIndex(&seqList, index, data);
                break;
            case 6:
                // 按下标删除
                printf("请输入下标：");
                scanf("%d", &index);
                DeleteListByIndex(&seqList, index);
                break;
            case 7:
                // 按元素删除
                printf("请输入元素：");
                scanf("%d", &data);
                DeleteListByData(&seqList, data);
                break;
            case 8:
                // 按下标修改
                printf("请输入下标：");
                scanf("%d", &index);
                printf("请输入修改后的元素：");
                scanf("%d", &data);
                UpdateListByIndex(&seqList, index, data);
                break;
            case 9:
                // 按元素修改
                printf("请输入修改前的元素：");
                scanf("%d", &oldData);
                printf("请输入修改后的元素：");
                scanf("%d", &data);
                UpdateListByData(&seqList, oldData, data);
                break;
            case 10:
                // 显示列表
                ShowList(seqList);
                break;
            case 11:
                // 逆置表
                Converts(&seqList);
                break;
            case 12:
                // 获取最大值
                printf("%d", Max(seqList));
                break;
            case 13:
                // 获取最小值
                printf("%d", Min(seqList));
                break;
            case 14:
                // 排序
                Sort(&seqList);
                break;
        }
        printf("\n 输入y继续执行其他功能。 \n");
        while (getchar() != 'y');
    }
}