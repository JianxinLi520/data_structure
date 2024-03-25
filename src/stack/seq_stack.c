#include <stdio.h>
#include <stdlib.h>
#include "seq_stack.h"

/**
 * 置空栈
 *
 * @param seqStack
 */
void InitStack(SeqStack *seqStack){
    seqStack->top = -1;
}

/**
 * 判栈空
 *
 * @param seqStack
 * @return
 */
int StackEmpty(SeqStack *seqStack){
    return seqStack->top == -1;
}

/**
 * 判栈满
 * @param seqStack
 * @return
 */
int StackFull(SeqStack *seqStack){
    return seqStack->top == StackSize - 1;
}

/**
 * 入栈
 * @param seqStack
 * @param data
 */
void Push(SeqStack *seqStack, DataType data){
    if (StackFull(seqStack)){
        printf("stack overflow \n");
    } else {
        seqStack->top = seqStack->top + 1;
        seqStack->data[seqStack->top] = x;
    }
}

/**
 * 出栈
 * @param seqStack
 */
DataType Pop(SeqStack *seqStack){
    if (StackEmpty(seqStack)){
        printf("stack underflow \n");
        exit(0);
    } else {
        return seqStack->data[seqStack->top--];
    }
}

/**
 * 获取栈顶元素（但不出栈）
 *
 * @param seqStack
 * @param data
 */
DataType GetTop(SeqStack *seqStack){
    if (StackEmpty(seqStack)){
        printf("stack underflow \n");
        exit(0);
    } else {
        return seqStack->data[seqStack->top];
    }
}
