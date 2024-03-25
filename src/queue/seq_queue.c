#include <stdio.h>
#include <stdlib.h>

#include "seq_queue.h"

/**
 * 置空队列
 * @param seqQueue
 */
void InitQueue(SeqQueue *seqQueue){
    seqQueue->front = -1;
    seqQueue->rear = -1;
}

/**
 * 判空队列
 * @param seqQueue
 * @return
 */
int QueueEmpty(SeqQueue *seqQueue){
    if (seqQueue->front == -1){
        return 1;
    }
    return seqQueue->front == seqQueue->rear;
}

/**
 * 判满队列
 * @param seqQueue
 * @return
 */
int QueueFull(SeqQueue *seqQueue){
    return seqQueue->front == QueueSize - 1;
}

/**
 * 入队
 * @param seqQueue
 * @param data
 */
void Push(SeqQueue *seqQueue, DataType data){
    if (QueueFull(seqQueue)){
        printf("The SeqQueue Is Full");
        exit(0);
    }
    seqQueue->data[seqQueue->front] = data;
    seqQueue->front++;
}

/**
 * 出队
 * @param seqQueue
 * @return
 */
DataType Pop(SeqQueue *seqQueue){
    if (QueueEmpty(seqQueue)){
        printf("The SeqQueue Is Empty");
        exit(0);
    }
    DataType result = seqQueue->data[seqQueue->rear];
    seqQueue->rear++;
    return result;
}

/**
 * 获取队头元素
 * @param seqQueue
 * @return
 */
DataType GetFront(SeqQueue *seqQueue){
    if (QueueEmpty(seqQueue)){
        printf("The SeqQueue Is Empty");
        exit(0);
    }
    DataType result = seqQueue->data[seqQueue->rear];
    return result;
}