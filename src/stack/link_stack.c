#include <stdio.h>
#include <stdlib.h>

#include "link_stack.h"

/**
 * 判栈空
 *
 * @param linkStack
 * @return
 */
int LinkStackEmpty(LinkStack *top){
    return top == NULL;
}

/**
 * 入栈
 * @param top
 * @param data
 */
void LinkStackPush(StackNode **top, DataType data){
    StackNode *stackNode = malloc(sizeof(StackNode));
    stackNode->data = data;
    stackNode->next = *top;
    *top = stackNode;
}

/**
 * 出栈
 * @param linkStack
 */
DataType LinkStackPop(LinkStack **top){
    StackNode *resultNode = *top;
    if (LinkStackEmpty(*top)){
        printf("stack empty \n");
        exit(0);
    } else {
        *top = resultNode->next;
        DataType result = resultNode->data;
        free(resultNode);
        return result;
    }
}

/**
 * 获取栈顶元素（但不出栈）
 *
 * @param linkStack
 */
DataType LinkStackGetTop(LinkStack *top){
    if (LinkStackEmpty(top)){
        printf("stack empty \n");
        exit(0);
    } else {
        return top->data;
    }
}