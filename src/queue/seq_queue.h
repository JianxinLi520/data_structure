/**
 * 顺序队列
 */

#ifndef DATA_STRUCTURE_SEQ_QUEUE_H
#define DATA_STRUCTURE_SEQ_QUEUE_H

#define SeqQueueSize 100
#define DataType int

/**
 * 入队时，rear + 1；
 * 出队时，front + 1；
 *
 * front == rear时队列为空
 */
typedef struct {
    DataType data[SeqQueueSize];
    int front;  // 队头下标，始终指向队头元素。
    int rear;   // 队尾下标，始终指向队尾元素的下一个位置。
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
void SeqEnQueue(SeqQueue *seqQueue, DataType data);

/**
 * 出队
 * @param seqQueue
 * @return
 */
DataType SeqDeQueue(SeqQueue *seqQueue);

/**
 * 获取队头元素
 * @param seqQueue
 * @return
 */
DataType SeqQueueGetFront(SeqQueue *seqQueue);

#endif //DATA_STRUCTURE_SEQ_QUEUE_H
