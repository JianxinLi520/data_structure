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
    if (index > length(list)){
        insert_tail(list, data);
    }
}

void delete_head(Node** list){
    Node* head = *list;
    *head = *head->next;
}

void delete_tail(Node* list){
    int count = length(list);
    if (count == 1){
        free(list);
    }
    for (int i=0; i<count; i++){
        list = list->next;
    }
    free(list);
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
    if (index != -1){
        delete_by_index(list, index);
    }
}

Node* get_node_by_index(Node* list, int index){

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