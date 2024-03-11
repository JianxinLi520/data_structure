//
// 双向链表
//

#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

typedef int DataType;

/**
 * 结点类型定义
 */
typedef struct doubleLinkedNode{
    // 数据域
    DataType data;
    // 指针域
    struct doubleLinkedNode *prior;
    struct doubleLinkedNode *next;
}DoubleLinkedNode;

typedef DoubleLinkedNode *DoubleLinkedList;

/**
 * 插入
 *
 * @param p
 * @param value
 */
void DoubleLinkedInsert(DoubleLinkedNode *p, DataType value);

/**
 * 删除指定节点
 *
 * @param p
 */
void DoubleLinkedDelete(DoubleLinkedNode *p);

#endif //DOUBLE_LINKED_LIST_H
