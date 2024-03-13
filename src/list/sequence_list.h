//
// 顺序表
//

#ifndef SEQUENCE_LIST_H
#define SEQUENCE_LIST_H

#define ListSize 100

typedef int DataType;

typedef struct sequence_list{
    DataType data[ListSize];
    int length;
}SeqList;

/**
 * 构造一个空的线性表
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
DataType GetNode(SeqList *list, int index);

/**
 * 按值查找
 *
 *      在表中查找第一个值为x的元素，并返回该元素在表中的位置，若表中没有元素的值为x，则返回0
 *
 * @param list
 * @param value
 * @return
 */
int LocateNode(SeqList *list, DataType value);

/**
 * 插入
 *
 *      在表的第index元素之前插入一个值为x的新元素
 *
 * @param list
 * @param index
 * @param value
 */
void InsertList(SeqList *list, int index, DataType value);

/**
 * 删除表的第i个元素
 *
 * @param list
 * @param index
 */
void DeleteList(SeqList *list, int index);

/**
 * 逆置表
 *
 * @param list
 */
void Converts(SeqList *list);

/**
 * 找出表的最大最小值
 * @param list
 * @param max
 * @param min
 * @param maxIndex
 * @param minIndex
 */
void MaxMin(SeqList *list, DataType *max, DataType *min, int *maxIndex, int *minIndex);


#endif //SEQUENCE_LIST_H
