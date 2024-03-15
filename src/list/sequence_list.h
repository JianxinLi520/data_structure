/**
 * 顺序表
 *
 * 1.初始化顺序表
 * 2.插入
 * 2.1.直接插入
 * 2.2.按位插入
 * 3.删除
 * 3.1.按位删除
 * 3.2.按元素删除
 * 4.查找
 * 5.修改
 * 5.1.按位修改
 * 5.2.按元素修改
 * 6.逆置
 * 7.排序
 * 8.最大值
 * 9.最小指
 * 10.获取表长
 */

#ifndef SEQUENCE_LIST_H
#define SEQUENCE_LIST_H

#define ListSize 10

typedef int DataType;

typedef struct sequence_list{
    DataType data[ListSize];
    int length;
}SeqList;

/**
 * 初始化顺序表
 *
 * @param list
 * @return
 */
SeqList InitList();

/**
 * 求线性表表长，返回线性表中元素的个数
 *
 * @return
 */
int ListLength(SeqList list);

/**
 * 获取表中第i个元素
 *
 * @param list
 * @param index
 * @return
 */
DataType GetNodeByIndex(SeqList list, int index);

/**
 * 按值查找
 *
 *      在表中查找第一个值为x的元素，并返回该元素在表中的位置，若表中没有元素的值为x，则返回0
 *
 * @param list
 * @param value
 * @return
 */
int GetNodeByData(SeqList list, DataType value);

/**
 * 直接插入
 *
 * @param list
 * @param value
 */
void InsertList(SeqList *list, DataType value);

/**
 * 按位插入
 *
 *      在表的第index元素之前插入一个值为x的新元素
 *
 * @param list
 * @param index
 * @param value
 */
void InsertListByIndex(SeqList *list, int index, DataType value);

/**
 * 删除表的第i个元素
 *
 * @param list
 * @param index
 */
void DeleteListByIndex(SeqList *list, int index);

/**
 * 删除指定元素
 * @param list
 * @param data
 */
void DeleteListByData(SeqList *list, DataType data);

/**
 * 按下标修改
 *
 * @param list
 * @param index
 * @param data
 */
void UpdateListByIndex(SeqList *list, int index, DataType data);

/**
 * 按元素修改
 *
 * @param list
 * @param oldData
 * @param newData
 */
void UpdateListByData(SeqList *list, DataType oldData, DataType newData);

/**
 * 展示列表
 *
 * @param list
 */
void ShowList(SeqList list);

/**
 * 逆置表
 *
 * @param list
 */
void Converts(SeqList *list);

/**
 * 找出表的最大值
 *
 * @param list
 * @return
 */
DataType Max(SeqList list);

/**
 * 找出表的最小值
 *
 * @param list
 * @return
 */
DataType Min(SeqList list);

/**
 * 排序
 *
 * @param list
 */
void Sort(SeqList *list);


#endif //SEQUENCE_LIST_H
