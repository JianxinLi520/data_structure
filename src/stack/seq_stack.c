#include <stdio.h>
#include <stdlib.h>
#include "seq_stack.h"

/**
 * 置空栈
 *
 * @param seqStack
 */
void InitSeqStack(SeqStack *seqStack){
    seqStack->top = -1;
}

/**
 * 判栈空
 *
 * @param seqStack
 * @return
 */
int SeqStackEmpty(SeqStack *seqStack){
    return seqStack->top == -1;
}

/**
 * 判栈满
 * @param seqStack
 * @return
 */
int SeqStackFull(SeqStack *seqStack){
    return seqStack->top == StackSize - 1;
}

/**
 * 入栈
 * @param seqStack
 * @param data
 */
void SeqStackPush(SeqStack *seqStack, DataType data){
    if (SeqStackFull(seqStack)){
        printf("stack overflow \n");
    } else {
        seqStack->top = seqStack->top + 1;
        seqStack->data[seqStack->top] = data;
    }
}

/**
 * 出栈
 * @param seqStack
 */
DataType SeqStackPop(SeqStack *seqStack){
    if (SeqStackEmpty(seqStack)){
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
DataType SeqStackGetTop(SeqStack *seqStack){
    if (SeqStackEmpty(seqStack)){
        printf("stack underflow \n");
        exit(0);
    } else {
        return seqStack->data[seqStack->top];
    }
}
