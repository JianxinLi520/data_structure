#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

Node* create(DataType data){
    Node* node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

/**
 * 为什么使用Node** 而不是使用Node*
 *
 *      Node* 传过来的是Node对象的指针，是值传递，无法对其调用者进行修改
 *      Node** 传过来的是Node对象指针的指针，所以可以通过指针对应的内存进行修改
 * @param head
 * @param data
 */
void insert_head(Node** head, DataType data){
    Node* node = (Node *) malloc(sizeof(Node));
    if (node == NULL){
        printf("Memory allocation failed!\n");
        return;
    }
    node->data = data;
    node->next = *head;
    *head = node;
}