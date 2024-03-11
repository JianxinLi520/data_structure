//
// 链表
//

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef int DataType;

/**
 * 结点类型定义
 */
typedef struct node{
    // 数据域
    DataType data;
    // 指针域
    struct node *next;
}ListNode;

typedef ListNode *LinkedList;

/**
 * 头插法
 * @return
 */
LinkedList CreateListF();

/**
 * 尾插法
 * @return
 */
LinkedList CreateListR();

/**
 * 按下标查找
 *
 * @param linkedList
 * @param index
 * @return
 */
ListNode GetNodeByIndex(LinkedList linkedList, int index);

/**
 * 按值查找
 *
 * @param linkedList
 * @param value
 * @return
 */
ListNode GetNodeByValue(LinkedList linkedList, DataType value);

/**
 * 插入运算
 *
 * @param linkedList
 * @param index
 * @param value
 */
void InsertList(LinkedList linkedList, int index, DataType value);

/**
 * 删除运输
 *
 * @param linkedList
 * @param index
 */
void DeleteList(LinkedList linkedList, int index);

#endif //LINKED_LIST_H
