#include <stdio.h>

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

const char* type[] = {"1.顺序表\n", "2.单链表\n", "3.双向链表\n"};


int main() {
    printf("请选择以下数据类型：\n");
    for (int i=0; i<ARRAY_LENGTH(type); i++){
        printf("%s", type[i]);
    }

    char select[] = "";
    scanf("%s", select);

    printf("已选择类型：%s\n", select);
    return 0;
}



