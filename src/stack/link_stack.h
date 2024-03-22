//
// 链栈
//

#ifndef DATA_STRUCTURE_LINK_STACK_H
#define DATA_STRUCTURE_LINK_STACK_H

typedef char DataType;

typedef struct stack_node{
    DataType data;
    struct stack_node* next;
}StackNode;

typedef StackNode* LinkStack;

/**
 * 判栈空
 *
 * @param top
 * @return
 */
int StackEmpty(LinkStack top);

/**
 * 入栈
 * @param top
 * @param data
 */
LinkStack Push(LinkStack top, DataType data);

/**
 * 出栈
 * @param top
 */
LinkStack Pop(LinkStack top, DataType* data);

/**
 * 获取栈顶元素（但不出栈）
 *
 * @param top
 */
DataType GetTop(LinkStack top);

#endif //DATA_STRUCTURE_LINK_STACK_H