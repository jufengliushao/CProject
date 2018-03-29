//
//  SignalListProblem.c
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/28.
//  Copyright © 2018年 fumed. All rights reserved.
//

#include "SignalListProblem.h"
#include <stdlib.h>
#pragma mark - problem 1
#pragma mark - --------------------------------satrt-----------------------------------------
/**
 * 第一题
 * 翻转单链表
 * 不可添加新节点
 * eg: 1->2->3->4->5
 * result: 5->4->3->2->1
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
#pragma mark - --------------------------------end-----------------------------------------

#pragma mark - problem 2
#pragma mark - --------------------------------satrt-----------------------------------------
/**
 * 第二个问题
 * 对链表中的部分进行翻转，不可添加新的节点
 * start 起始位置(从1开始计数)
 * end 结束位置 - 默认参数合法
 * eg: 1->2->3->4->5->6->7->8 start=1 end=4
 * result: 4->3->2->1->5->6->7->8
 */
void lc_secodListProblem(){
    SignalList *header = lc_firstListProblem_init()->next;
    lc_firstListProblem_print(header);
    int start = 2, end = 5;
    SignalList *preNode = header, *lastNode = NULL, *node = header, *newNode = NULL;
    while (preNode && --start) {
        preNode = node;
        node = node -> next;
    }
    start = 2;
    while (start++ <= end) {
        lastNode = node ->next;
        node->next = newNode;
        newNode = node;
        node = lastNode;
//         lc_firstListProblem_print(node);
    }
   
    preNode->next->next = node;
    preNode->next = newNode;
    lc_firstListProblem_print(header);
}
#pragma mark - --------------------------------end-----------------------------------------
