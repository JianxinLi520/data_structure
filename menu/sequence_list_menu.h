//
// Created by li on 2024/3/18.
//

#ifndef DATA_STRUCTURE_SEQUENCE_LIST_MENU_H
#define DATA_STRUCTURE_SEQUENCE_LIST_MENU_H

#include "../src/list/sequence_list.h"

#define SequenceFunctionCount 15
// 汉字一个占3个字节
#define FunctionNameMaxSize 25

typedef struct sequence_list_menu{
    int menuCount;
    char functionName[SequenceFunctionCount][FunctionNameMaxSize];
}SequenceListMenu;

/**
 * 构建初始菜单
 *
 * @return
 */
SequenceListMenu InitSequenceListMenu();

/**
 * 展示菜单
 */
void ShowSequenceListMenu(SequenceListMenu sequenceListMenu);

/**
 * 选中菜单
 */
void SelectSequenceListMenu(int index);

/**
 * 选择功能
 */
void SelectFunction(SequenceListMenu sequenceListMenu);


#endif //DATA_STRUCTURE_SEQUENCE_LIST_MENU_H
