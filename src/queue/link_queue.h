//
// 链队列
//

#ifndef DATA_STRUCTURE_LINK_QUEUE_H
#define DATA_STRUCTURE_LINK_QUEUE_H

#define DataType int

typedef struct queue_node {
    DataType data;
    struct queue_node *next;
}QueueNode;

typedef struct {
    QueueNode *front;
    QueueNode *rear;
}LinkQueue;

/**
 * 置空队列
 * @param linkQueue
 */
void InitQueue(LinkQueue *linkQueue);

/**
 * 判空队列
 * @param linkQueue
 * @return
 */
int QueueEmpty(LinkQueue *linkQueue);

/**
 * 入队
 * @param linkQueue
 * @param data
 */
void Push(LinkQueue *linkQueue, DataType data);

/**
 * 出队
 * @param linkQueue
 * @return
 */
DataType Pop(LinkQueue *linkQueue);

/**
 * 获取队头元素
 * @param linkQueue
 * @return
 */
DataType GetFront(LinkQueue *linkQueue);

#endif //DATA_STRUCTURE_LINK_QUEUE_H
