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
    int data;
    // 指针域
    struct node *next;
}Node;

/**
 * 创建单链表
 *
 * @param data
 * @return
 */
Node* create(DataType data);

/**
 * 头插法
 *
 * @param head
 * @param data
 */
void insert_head(Node** head, DataType data);

/**
 * 尾插法
 *
 * @param list
 * @param data
 */
void insert_tail(Node* list, DataType data);

/**
 * 按下标插入
 *
 * @param list
 * @param data
 * @param index
 */
void insert_by_index(Node *list, DataType data, int index);

/**
 * 删除头节点
 *
 * @param list
 */
void delete_head(Node** list);

/**
 * 删除尾节点
 *
 * @param list
 */
void delete_tail(Node* list);

/**
 * 根据下标删除
 *
 * @param list
 * @param index
 */
void delete_by_index(Node* list, int index);

/**
 * 根据值删除
 *
 * @param list
 * @param data
 */
void delete_by_data(Node* list, DataType data);

/**
 * 按下标查找
 *
 * @param list
 * @param index
 * @return
 */
Node* get_node_by_index(Node* list, int index);

/**
 * 按值查找
 *
 * @param list
 * @param value
 * @return
 */
int get_index_by_value(Node* list, DataType value);

/**
 * 判断指定值是否存在
 *
 * @param list
 * @param value
 * @return
 */
_Bool contain(Node list, DataType value);

/**
 * 反转链表
 *
 * @param list
 */
void converts(Node *list);

/**
 * 合并两个链表
 *
 * @param one
 * @param two
 * @return
 */
Node merge(Node one, Node two);

/**
 * 获取链表长度
 *
 * @param list
 * @return
 */
int length(Node *list);

/**
 * 判断链表是否为空
 *
 * @param list
 * @return
 */
_Bool is_empty(Node list);

/**
 * 删除重复元素
 *
 * @param list
 */
void remove_duplicate(Node list);

/**
 * 排序
 *
 * @param list
 */
void sort(Node *list);

/**
 * 展示单链表
 *
 * @param list
 */
void show_list(Node list);

#endif //LINKED_LIST_H
