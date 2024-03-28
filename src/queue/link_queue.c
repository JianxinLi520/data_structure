#include <stdio.h>
#include <stdlib.h>

#include "link_queue.h"

/**
 * 置空队列
 *
 *      空链队列的头尾指针均指向一个空结点
 * @param linkQueue
 */
void InitLinkQueue(LinkQueue *linkQueue){
    QueueNode *head = (QueueNode*) malloc(sizeof (QueueNode));
    head->next = NULL;
    linkQueue->front = head;
    linkQueue->rear = head;
}

/**
 * 判空队列
 *
 *      头尾指针指向同一个元素
 *
 * @param linkQueue
 * @return
 */
int LinkQueueEmpty(LinkQueue *linkQueue){
    return linkQueue->front == linkQueue->rear;
}

/**
 * 入队
 * @param linkQueue
 * @param data
 */
void LinkEnQueue(LinkQueue *linkQueue, DataType data){
    QueueNode *queueNode = malloc((sizeof(QueueNode)));
    queueNode->data = data;
    queueNode->next = NULL;
    linkQueue->rear->next = queueNode;
    linkQueue->rear = queueNode;
}

/**
 * 出队
 *
 *      队列长度大于1时，只需修改头结点的指针域即可，尾指针不变
 *      队列长度等于1时，出队时不仅要修改头结点指针域，还需修改尾结点指针域
 *      为了同时处理上述两种情况，改进出队算法，出队时只修改队头结点。
 * @param linkQueue
 * @return
 */
DataType LinkDeQueue(LinkQueue *linkQueue){
    if (LinkQueueEmpty(linkQueue)){
        printf("The Queue Is Empty");
        exit(0);
    }
    QueueNode *rearNode = linkQueue->front;
    DataType result = rearNode->data;
    linkQueue->front = rearNode->next;
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