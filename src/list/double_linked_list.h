//
// 双向链表
//

#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

typedef int DataType;

/**
 * 结点类型定义
 */
typedef struct double_linked_node{
    // 数据域
    DataType data;
    // 指针域
    struct double_linked_node* before;
    struct double_linked_node* next;
}DoubleLinkedNode;

#endif //DOUBLE_LINKED_LIST_H
