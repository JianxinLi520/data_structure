#include <stdio.h>
#include <stdlib.h>

#include "cir_queue.h"

/**
 * 置空队列
 * @param cirQueue
 */
void InitCirQueue(CirQueue *cirQueue){
    cirQueue->front = -1;
    cirQueue->rear = -1;
}

/**
 * 判空队列
 * @param cirQueue
 * @return
 */
int CirQueueEmpty(CirQueue *cirQueue){
    return cirQueue->front == cirQueue->rear;
}

/**
 * 判满队列
 * @param cirQueue
 * @return
 */
int CirQueueFull(CirQueue *cirQueue){
    return cirQueue->rear - cirQueue->front == -1 || cirQueue->rear - cirQueue->front == QueueSize;
}

/**
 * 入队
 * @param cirQueue
 * @param data
 */
void CirQueuePush(CirQueue *cirQueue, DataType data){
    if (CirQueueFull(cirQueue)){
        printf("The Queue Is Full");
        exit(0);
    }
    if (cirQueue->front == QueueSize - 1){
        cirQueue->data[0] = data;
        cirQueue->front = 0;
    } else {
        cirQueue->data[cirQueue->front + 1] = data;
        cirQueue->front++;
    }
}

/**
 * 出队
 * @param cirQueue
 * @return
 */
DataType CirQueuePop(CirQueue *cirQueue){
    if (CirQueueEmpty(cirQueue)){
        printf("The Queue Is Empty");
        exit(0);
    }
    if (cirQueue->rear == QueueSize - 1){
        DataType result = cirQueue->data[QueueSize - 1];
        cirQueue->rear = 0;
        return result;
    } else {
        DataType result = cirQueue->data[cirQueue->rear];
        cirQueue->rear++;
        return result;
    }
}

/**
 * 获取队头元素
 * @param cirQueue
 * @return
 */
DataType CirQueueGetFront(CirQueue *cirQueue){
    if (CirQueueEmpty(cirQueue)){
        printf("The Queue Is Empty");
        exit(0);
    }
    return cirQueue->data[cirQueue->rear];
}