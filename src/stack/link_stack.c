#include <stdio.h>
#include <stdlib.h>

#include "link_stack.h"

/**
 * 判栈空
 *
 * @param linkStack
 * @return
 */
int StackEmpty(LinkStack top){
    return top == NULL;
}

/**
 * 入栈
 * @param top
 * @param data
 */
LinkStack Push(LinkStack top, DataType data){
    StackNode* stackNode = malloc(sizeof(StackNode));
    stackNode->data = data;
    stackNode->next = top;
    top = stackNode;
    return top;
}

/**
 * 出栈
 * @param linkStack
 */
LinkStack Pop(LinkStack top, DataType* data){
    StackNode* stackNode = top;
    if (StackEmpty(top)){
        printf("stack empty \n");
        exit(0);
    } else {
        *data = stackNode->data;
        top = stackNode->next;
        free(stackNode);
        return top;
    }
}

/**
 * 获取栈顶元素（但不出栈）
 *
 * @param linkStack
 */
DataType GetTop(LinkStack top){
    if (StackEmpty(top)){
        printf("stack empty \n");
        exit(0);
    } else {
        return top->data;
    }
}