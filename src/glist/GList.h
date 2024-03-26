//
// 广义表
//

#ifndef DATA_STRUCTURE_GLIST_H
#define DATA_STRUCTURE_GLIST_H

typedef enum {LINK, DATA} ElementType;  // 定义元素类型为原子或子表

// 结构体定义广义表的节点
typedef struct{
    ElementType type;  // 元素类型
    union {
        int data;  // 原子元素
        struct GLNode* slink;  // 子表
    } data;
    struct GLNode* next;  // 指向下一个节点或子表
} GLNode;

typedef GLNode GList;

/**
 * 创建一个数据节点
 * @return
 */
GList* CreateDataNode();

/**
 * 创建一个子表节点
 * @return
 */
GList* CreateSubNode();

/**
 * 输出广义表
 * @param gList
 */
void PrintGlist(GList *gList);

/**
 * 获取广义表表头
 * @param gList
 * @return
 */
GList* GetHead(GList *gList);

/**
 * 获取广义表表尾
 * @param gList
 * @return
 */
GList* GetTail(GList *gList);

/**
 * 获取广义表深度
 * @param gList
 * @return
 */
int GetDepth(GList *gList);

/**
 * 释放广义表
 * @param gList
 */
void freeGList(GList *gList);

#endif //DATA_STRUCTURE_GLIST_H
