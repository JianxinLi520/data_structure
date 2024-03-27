//
// 顺序栈
//

#ifndef DATA_STRUCTURE_SEQ_STACK_H
#define DATA_STRUCTURE_SEQ_STACK_H

#define StackSize 100

typedef char DataType;
typedef struct {
    DataType data[StackSize];
    int top;
}SeqStack;

/**
 * 置空栈
 *
 * @param seqStack
 */
void InitSeqStack(SeqStack *seqStack);

/**
 * 判栈空
 *
 * @param seqStack
 * @return
 */
int SeqStackEmpty(SeqStack *seqStack);

/**
 * 判栈满
 * @param seqStack
 * @return
 */
int SeqStackFull(SeqStack *seqStack);

/**
 * 入栈
 * @param seqStack
 * @param data
 */
void SeqStackPush(SeqStack *seqStack, DataType data);

/**
 * 出栈
 * @param seqStack
 */
DataType SeqStackPop(SeqStack *seqStack);

/**
 * 获取栈顶元素（但不出栈）
 *
 * @param seqStack
 */
DataType SeqStackGetTop(SeqStack *seqStack);

#endif //DATA_STRUCTURE_SEQ_STACK_H
