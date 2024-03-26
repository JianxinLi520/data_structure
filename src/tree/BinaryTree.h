//
// 二叉树
//

#ifndef DATA_STRUCTURE_BINARYTREE_H
#define DATA_STRUCTURE_BINARYTREE_H

#define DataType int

typedef struct binary_tree_node{
    DataType data;
    struct binary_tree_node *left;
    struct binary_tree_node *right;
}BinNode;

typedef BinNode BinTree;

/**
 * 新增节点
 * @param binNode
 * @param data
 */
void InsertNode(BinNode **binNode, DataType data);

#endif //DATA_STRUCTURE_BINARYTREE_H
