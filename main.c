#include <stdio.h>

#include "menu/home_menu.h"

#include "src/list/linked_list.h"

int main() {
    Node* head = create(1);
    insert_head(head, 2);
    insert_head(head, 3);
    return 0;
}

