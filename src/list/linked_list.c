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

void insert_tail(Node* list, DataType data){
    Node* node = create(data);
    for (;;) {
        if (list->next == NULL){
            list->next = node;
            break;
        } else {
            list = list->next;
        }
    }
}

void insert_by_index(Node* list, DataType data, int index){
    Node* node = create(data);
    if (index < 0){
        printf("下标错误");
    }
    if (index >= length(list)){
        insert_tail(list, data);
    } else {
        Node* before = get_node_by_index(list, index - 1);
        Node* next = before->next;
        before->next = next;
        node->next = next;
    }

}

void delete_head(Node** list){
    Node* targetNode = *list;
    *list = targetNode->next;
    free(targetNode);
}

void delete_tail(Node** list){
    int count = length(*list);
    if (count <= 1){
        *list = NULL;
    } else {
        Node* targetNodeBefore = get_node_by_index(*list, count - 2);
        Node* targetNode = targetNodeBefore->next;
        free(targetNode);
        targetNodeBefore->next = NULL;
    }
}

void delete_by_index(Node* list, int index){
    Node* beforeNode =  get_node_by_index(list, index - 1);
    if (beforeNode == NULL){
        delete_head(&list);
    } else {
        Node* node = beforeNode->next;
        Node* nextNode = node->next;
        beforeNode->next = nextNode;
        free(node);
    }
}

void delete_by_data(Node* list, DataType data){
    int index = get_index_by_value(list, data);
    while (index != -1){
        delete_by_index(list, index);
        index = get_index_by_value(list, data);
    }
}

Node* get_node_by_index(Node* list, int index){
    int count = length(list);
    if (index > count){
        return NULL;
    }
    if (index < 0){
        return NULL;
    }
    Node* targetNode = list;
    for (int i=0; i<index; i++){
        targetNode = targetNode->next;
    }
    return targetNode;
}

int get_index_by_value(Node* list, DataType value){
    int index = -1;
    for(int i=0; i < length(list); i++){
        if (list->data == value){
            return index;
        } else {
            list = list->next;
            index++;
        }
    }
}

int get_index_by_value_and_start_index(Node* list, DataType value, int startIndex){
    int index = -1;
    for(int i= startIndex; i < length(list); i++){
        if (list->data == value){
            return index;
        } else {
            list = list->next;
            index++;
        }
    }
}

_Bool contain(Node* list, DataType value){
    for (int i = 0; i < length(list); i++) {
        Node* node = get_node_by_index(list, i);
        if (node->data == value){
            return 1;
        }
    }
    return 0;
}

void converts(Node** list){
    int count = length(*list);
    Node* result = get_node_by_index(*list, count - 1);
    for (int i = length(*list) - 2; i >= 0; i--) {
        result->next = get_node_by_index(*list, i);
        result = result->next;
    }
    *list = result;
}

Node merge(Node* one, Node* two){
    Node* target = get_node_by_index(one, length(one) - 1);
    target->next = two;
}

int length(Node* list){
    int length = 0;
    for (;;){
        if (list == NULL){
            break;
        } else {
            list = list->next;
            length++;
        }
    }
    return length;
}

_Bool is_empty(Node* list){
    int count = length(list);
    return count;
}

void remove_duplicate(Node* list){
    int count = length(list);
    int needDeleteIndex[length(list) - 2];
    for (int i = 0; i < count - 1; i++) {

    }
}

void sort(Node* list){

}

void show_list(Node* list){
    printf("[");
    for (int i = 0; i < length(list) - 1; i++) {
        printf("{");
        printf("%d", get_node_by_index(list, i)->data);
        printf("} ");
    }
    printf("]");
}