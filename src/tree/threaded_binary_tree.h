//
// 线索二叉树
//

#ifndef DATA_STRUCTURE_THREADED_BINARY_TREE_H
#define DATA_STRUCTURE_THREADED_BINARY_TREE_H

#include "link_binary_tree.h"

typedef struct threaded_binary_node{
    DataType dataType;
    int lTag;
    int rTag;
    struct threaded_binary_node *lChild;
    struct threaded_binary_node *rChild;
}ThreadedBinaryNode;

typedef ThreadedBinaryNode ThreadedBinaryTree;

/**
 * 二叉树线索化
 *
 *      中序遍历序列
 * @param binTree
 * @return
 */
ThreadedBinaryTree* InorderThread(BinTree *binTree);

#endif //DATA_STRUCTURE_THREADED_BINARY_TREE_H
