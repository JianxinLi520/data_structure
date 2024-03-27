//
// 链式二叉树
//

#ifndef DATA_STRUCTURE_LINK_BINARY_TREE_H
#define DATA_STRUCTURE_LINK_BINARY_TREE_H

typedef char DataType;

typedef struct node{
    DataType data;
    struct node *lChild;
    struct node *rChild;
}BinTNode;

typedef BinTNode BinTree;

/**
 * 根据广义表建立二叉树
 *
 * @param binTree
 * @param data
 */
BinTree* CreateTree(char *str);

/**
 * 前序遍历
 *
 *      递归遍历
 * @param binTree
 */
void Preorder(BinTree *binTree);

/**
 * 中序遍历
 *
 *      递归遍历
 * @param binTree
 */
void Inorder(BinTree *binTree);

/**
 * 后序遍历
 *
 *      递归遍历
 * @param binTree
 */
void Postorder(BinTree *binTree);

/**
 * 获取树高
 *
 * @param binTree
 * @return
 */
int Depth(BinTree *binTree);

#endif //DATA_STRUCTURE_LINK_BINARY_TREE_H
