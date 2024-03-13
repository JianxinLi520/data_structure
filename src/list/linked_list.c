//
// Created by li on 2024/3/13.
//

#include <stdlib.h>
#include "linked_list.h"

LinkedList CreateList(){
    LinkedList head;
    return head;
}


void InsertListF(LinkedList list, DataType data){
    ListNode *p;
    p = (ListNode *)malloc(sizeof(ListNode));
    p->data=data;
    p->next=list.next;
    list.next=p;
}