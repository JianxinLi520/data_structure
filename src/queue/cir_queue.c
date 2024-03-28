#include <stdio.h>
#include <stdlib.h>

#include "cir_queue.h"

/**
 * 置空队列
 * @param cirQueue
 */
void InitCirQueue(CirQueue *cirQueue){
    cirQueue->front = 0;
    cirQueue->rear = 0;
}

/**
 * 判空队列
 * @param cirQueue
 * @return
 */
int CirQueueEmpty(CirQueue *cirQueue){
    return cirQueue->rear == cirQueue->front;
}

/**
 * 判满队列
 *
 *      如果rear的下一个位置为front，则显示队满。
 *
 *      rear指针始终指向NULL。
 * @param cirQueue
 * @return
 */
int CirQueueFull(CirQueue *cirQueue){
    return (cirQueue->rear + 1) % QueueSize == cirQueue->front;
}

/**
 * 入队
 * @param cirQueue
 * @param data
 */
void CirEnQueue(CirQueue *cirQueue, DataType data){
    if (CirQueueFull(cirQueue)){
        printf("The Queue Is Full");
        exit(0);
    } else {
        cirQueue->data[cirQueue->rear] = data;
        cirQueue->rear = (cirQueue->rear + 1) % QueueSize; // 循环意义下的加1
    }

}

/**
 * 出队
 * @param cirQueue
 * @return
 */
DataType CirDeQueue(CirQueue *cirQueue){
    if (CirQueueEmpty(cirQueue)) {
        printf("The Queue Is Empty");
        exit(0);
    } else {
        DataType result = cirQueue->data[cirQueue->front];
        cirQueue->front = (cirQueue->front + 1) % QueueSize;
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
    } else {
        return cirQueue->data[cirQueue->front];
    }
}