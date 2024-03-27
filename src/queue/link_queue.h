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
void InitLinkQueue(LinkQueue *linkQueue);

/**
 * 判空队列
 * @param linkQueue
 * @return
 */
int LinkQueueEmpty(LinkQueue *linkQueue);

/**
 * 入队
 * @param linkQueue
 * @param data
 */
void LinkQueuePush(LinkQueue *linkQueue, DataType data);

/**
 * 出队
 * @param linkQueue
 * @return
 */
DataType LinkQueuePop(LinkQueue *linkQueue);

/**
 * 获取队头元素
 * @param linkQueue
 * @return
 */
DataType LinkQueueGetFront(LinkQueue *linkQueue);

#endif //DATA_STRUCTURE_LINK_QUEUE_H
