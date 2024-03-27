//
// Created by li on 2024/3/27.
//

#include "link_binary_tree_menu.h"
#include "../src/tree/link_binary_tree.h"

void test(){
    char str[] = "(A(B(,D(E,F)),C))";
    BinTree *tree = CreateTree(str);
    Preorder(tree);
}