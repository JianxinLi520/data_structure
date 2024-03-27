//
// 顺序队列
//

#ifndef DATA_STRUCTURE_SEQ_QUEUE_H
#define DATA_STRUCTURE_SEQ_QUEUE_H

#define QueueSize 100
#define DataType int

typedef struct {
    DataType data[QueueSize];
    int front;  // 队头下标
    int rear;   // 队尾下标
}SeqQueue;

/**
 * 置空队列
 * @param seqQueue
 */
void InitSeqQueue(SeqQueue *seqQueue);

/**
 * 判空队列
 * @param seqQueue
 * @return
 */
int SeqQueueEmpty(SeqQueue *seqQueue);

/**
 * 判满队列
 * @param seqQueue
 * @return
 */
int SeqQueueFull(SeqQueue *seqQueue);

/**
 * 入队
 * @param seqQueue
 * @param data
 */
void SeqQueuePush(SeqQueue *seqQueue, DataType data);

/**
 * 出队
 * @param seqQueue
 * @return
 */
DataType SeqQueuePop(SeqQueue *seqQueue);

/**
 * 获取队头元素
 * @param seqQueue
 * @return
 */
DataType SeqQueueGetFront(SeqQueue *seqQueue);

#endif //DATA_STRUCTURE_SEQ_QUEUE_H
