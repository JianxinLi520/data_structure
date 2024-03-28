#include <stdio.h>
#include <stdlib.h>

#include "seq_queue.h"

/**
 * 置空队列
 * @param seqQueue
 */
void InitSeqQueue(SeqQueue *seqQueue){
    seqQueue->front = 0;
    seqQueue->rear = 0;
}

/**
 * 判空队列
 *
 *      front == rear
 * @param seqQueue
 * @return
 */
int SeqQueueEmpty(SeqQueue *seqQueue){
    return seqQueue->front == seqQueue->rear;
}

/**
 * 判满队列
 *
 *      rear == SeqQueueSize - 1
 * @param seqQueue
 * @return
 */
int SeqQueueFull(SeqQueue *seqQueue){
    return seqQueue->rear == SeqQueueSize - 1;
}

/**
 * 入队
 * @param seqQueue
 * @param data
 */
void SeqEnQueue(SeqQueue *seqQueue, DataType data){
    if (SeqQueueFull(seqQueue)){
        printf("The SeqQueue Is Full");
        exit(0);
    }
    seqQueue->data[seqQueue->rear] = data;
    seqQueue->rear++;
}

/**
 * 出队
 * @param seqQueue
 * @return
 */
DataType SeqDeQueuePop(SeqQueue *seqQueue){
    if (SeqQueueEmpty(seqQueue)){
        printf("The SeqQueue Is Empty");
        exit(0);
    }
    DataType result = seqQueue->data[seqQueue->front];
    seqQueue->front++;
    return result;
}

/**
 * 获取队头元素
 * @param seqQueue
 * @return
 */
DataType SeqQueueGetFront(SeqQueue *seqQueue){
    if (SeqQueueEmpty(seqQueue)){
        printf("The SeqQueue Is Empty");
        exit(0);
    }
    DataType result = seqQueue->data[seqQueue->front];
    return result;
}