#include <stdlib.h>
#include <stdio.h>

#include "link_binary_tree.h"

/**
 * 根据广义表建立二叉树
 *
 * @param binTree
 * @param data
 *
 * （A(B(,D(E,F)),C)）
 *
 *  根据 符号 （、，、）判断下一个数据所代表元素的位置
 */
BinTree* CreateTree(char *str){
    BinTNode *st[100];  // 指针数组模拟栈
    int top = -1;       // 栈顶下标
    int strIndex = 0;
    char ch = str[strIndex];
    BinTNode *root = NULL; // 根节点
    BinTNode *p = NULL;
    int nodeLocation = 0; // 节点位置，左1，右2
    while (ch != '\0'){
        switch (ch) {
            case '(':
                top++;
                st[top] = p;
                nodeLocation = 1;
                break;
            case ')':
                top--;
                break;
            case ',':
                nodeLocation = 2;
                break;
            default:
                p = (BinTNode*) malloc(sizeof (BinTNode));
                p->data = ch;
                p->lChild = NULL;
                p->rChild = NULL;
                if (root == NULL){
                    root = p;
                } else {
                    switch (nodeLocation) {
                        case 1:
                            st[top]->lChild=p;
                            break;
                        case 2:
                            st[top]->rChild=p;
                            break;
                    }
                }
        }
        strIndex++;
        ch = str[strIndex];
    }
    return root;
}

/**
 * 前序遍历
 *
 *      递归遍历
 * @param binTree
 */
void Preorder(BinTree *binTree){
    if (binTree != NULL){
        printf("%c", binTree->data);
        Preorder(binTree->lChild);
        Preorder(binTree->rChild);
    }
}

/**
 * 中序遍历
 *
 *      递归遍历
 * @param binTree
 */
void Inorder(BinTree *binTree){
    if (binTree != NULL){
        Inorder(binTree->lChild);
        printf("%c", binTree->data);
        Inorder(binTree->rChild);
    }
}

/**
 * 后序遍历
 *
 *      递归遍历
 * @param binTree
 */
void Postorder(BinTree *binTree){
    if (binTree != NULL){
        Postorder(binTree->lChild);
        Postorder(binTree->rChild);
        printf("%c", binTree->data);
    }
}

/**
 * 获取树高
 *
 * @param binTree
 * @return
 */
int Depth(BinTree *binTree){
    int leftDepth;
    int rightDepth;
    if (binTree == NULL){
        return 0;
    } else {
        leftDepth = Depth(binTree->lChild);
        rightDepth = Depth(binTree->rChild);
        if (leftDepth > rightDepth){
            return leftDepth + 1;
        } else {
            return rightDepth + 1;
        }
    }
}