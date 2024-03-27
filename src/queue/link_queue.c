#include <stdio.h>
#include <stdlib.h>

#include "link_queue.h"

/**
 * 置空队列
 * @param linkQueue
 */
void InitLinkQueue(LinkQueue *linkQueue){
    QueueNode *queueNode = linkQueue->rear;
    while (queueNode != NULL){
        QueueNode  *freeNode = queueNode;
        queueNode = queueNode->next;
        free(freeNode);
    }
    linkQueue->front = NULL;
}

/**
 * 判空队列
 * @param linkQueue
 * @return
 */
int LinkQueueEmpty(LinkQueue *linkQueue){
    return linkQueue->front == NULL;
}

/**
 * 入队
 * @param linkQueue
 * @param data
 */
void LinkQueuePush(LinkQueue *linkQueue, DataType data){
    QueueNode *queueNode = malloc((sizeof(QueueNode)));
    queueNode->data = data;
    queueNode->next = NULL;
    linkQueue->rear->next = queueNode;
    linkQueue->rear = queueNode;
}

/**
 * 出队
 * @param linkQueue
 * @return
 */
DataType LinkQueuePop(LinkQueue *linkQueue){
    if (LinkQueueEmpty(linkQueue)){
        printf("The Queue Is Empty");
        exit(0);
    }
    QueueNode *rearNode = linkQueue->rear;
    DataType result = rearNode->data;
    linkQueue->rear = rearNode->next;
    free(rearNode);
    return result;
}

/**
 * 获取队头元素
 * @param linkQueue
 * @return
 */
DataType LinkQueueGetFront(LinkQueue *linkQueue){
    if (LinkQueueEmpty(linkQueue)){
        printf("The Queue Is Empty");
        exit(0);
    }
    return linkQueue->rear->data;
}