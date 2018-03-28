//
//  SignalListProblem.c
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/28.
//  Copyright © 2018年 fumed. All rights reserved.
//

#include "SignalListProblem.h"
#include <stdlib.h>
/**
 * 第一题
 * 翻转单链表
 * 不可添加新节点
 */
void lc_firstListProblem(){
    SignalList *header = lc_firstListProblem_init();
    lc_firstListProblem_print(header->next);
    SignalList *preNode = NULL, *lastNode;
    header = header -> next;
    while (header) {
        lastNode = header -> next;
        header -> next = preNode;
        preNode = header;
        header = lastNode;
    }
    header = preNode;
    lc_firstListProblem_print(header);
}

/**
 * 初始化链表
 * 返回头结点
 */
SignalList * lc_firstListProblem_init(){
    SignalList *header = (SignalList *)malloc(sizeof(SignalList));
    int a[] = {2, 3, 5, 6, 8, 9};
    SignalList *preNode = header;
    for (int i = 0; i < 6; i ++) {
        SignalList *node = (SignalList *)malloc(sizeof(SignalList));
        node->data = a[i];
        node->next = NULL;
        preNode->next = node;
        preNode = node;
    }
    return header;
}

/**
 * 打印所有数据
 * 第一个结点
 */
void lc_firstListProblem_print(SignalList *header){
    while (header) {
        printf("%d->", header->data);
        header = header->next;
    }
    printf("\n");
}
