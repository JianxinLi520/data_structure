/**
 * 链栈
 *
 * 为了克服顺序存储分配固定空间所产生的溢出和空间浪费问题，可采用链式存储结构来存储栈。
 *
 * 链栈是运算受限的单链表，其插入和删除仅限制在表头（栈顶）进行，因此不必设置头节点，将单链表的头指针head改为栈的栈顶指针top即可。
 *
 */

#ifndef DATA_STRUCTURE_LINK_STACK_H
#define DATA_STRUCTURE_LINK_STACK_H

typedef char DataType;

typedef struct stack_node{
    DataType data;
    struct stack_node *next;
}StackNode;

typedef StackNode LinkStack;

/**
 * 判栈空
 *
 * @param top
 * @return
 */
int LinkStackEmpty(LinkStack *top);

/**
 * 入栈
 * @param top
 * @param data
 */
void LinkStackPush(StackNode **top, DataType data);

/**
 * 出栈
 * @param top
 */
DataType LinkStackPop(LinkStack **top);

/**
 * 获取栈顶元素（但不出栈）
 *
 * @param top
 */
DataType LinkStackGetTop(LinkStack *top);

#endif //DATA_STRUCTURE_LINK_STACK_H
