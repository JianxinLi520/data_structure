//
// 循环队列
//

#ifndef DATA_STRUCTURE_CIR_QUEUE_H
#define DATA_STRUCTURE_CIR_QUEUE_H

#define QueueSize 100
#define DataType int

typedef struct {
    DataType data[QueueSize];
    int front;
    int rear;
}CirQueue;

/**
 * 置空队列
 * @param cirQueue
 */
void InitCirQueue(CirQueue *cirQueue);

/**
 * 判空队列
 * @param cirQueue
 * @return
 */
int CirQueueEmpty(CirQueue *cirQueue);

/**
 * 判满队列
 * @param cirQueue
 * @return
 */
int CirQueueFull(CirQueue *cirQueue);

/**
 * 入队
 * @param cirQueue
 * @param data
 */
void CirQueuePush(CirQueue *cirQueue, DataType data);

/**
 * 出队
 * @param cirQueue
 * @return
 */
DataType CirQueuePop(CirQueue *cirQueue);

/**
 * 获取队头元素
 * @param cirQueue
 * @return
 */
DataType CirQueueGetFront(CirQueue *cirQueue);

#endif //DATA_STRUCTURE_CIR_QUEUE_H
