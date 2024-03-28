/**
 * 顺序栈
 *
 *  必须预先分配存储空间，因此要考虑溢出问题。另外实际使用时往往同时使用多个栈，需要为每个栈分配一个较大的空间，往往会产生空间上的浪费。
 *
 *  如果将多个栈分配在同一顺序存储空间内，即让多个栈共享存储空间，则可以相互进行调节，即节约了空间，又可降低发生溢出的概率。
 */

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
