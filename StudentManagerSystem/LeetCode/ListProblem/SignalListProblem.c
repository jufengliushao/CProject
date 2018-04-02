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
void lc_firstListProblem(void){
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
SignalList * lc_firstListProblem_init(void){
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
void lc_secodListProblem(void){
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
    }
   
    preNode->next->next = node;
    preNode->next = newNode;
    lc_firstListProblem_print(header);
}
#pragma mark - --------------------------------end-----------------------------------------

#pragma mark - problem 3
#pragma mark - --------------------------------satrt-----------------------------------------
/**
 * 第三个问题
 * 判断当前是否有环
 * 思路：
 * 采用快慢指针的方法，当快指针与慢指针重合时，就存在环
 * 当快指针->NULL时，不存在环
 * 快指针比慢指针快一个节点
 */
void lc_thirdListProblem(void){
    SignalList *header = lc_thirdListProblem_init();
    SignalList *slowNode = header, *fastNode = header->next;
    while (slowNode != fastNode && fastNode->next->next) {
        slowNode = slowNode->next;
        fastNode = fastNode->next->next;
    }
    if (fastNode->next) {
        // 重合存在环
        printf("此链表存在环\n");
    }else{
        // 不存在环
        printf("此链表不存在环\n");
    }
}

/**
 * 初始化具有环的单链表
 */
SignalList *lc_thirdListProblem_init(void){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int end = 3;
    SignalList *header = (SignalList *)malloc(sizeof(SignalList));
    header->data = 0;
    header->next = NULL;
    SignalList *pre = header;
    for (int i = 0; i < 8; i ++) {
        SignalList *node = (SignalList *)malloc(sizeof(SignalList));
        node->data = a[i];
        node->next = NULL;
        pre->next = node;
        pre = node;
    }
    SignalList *pree = header;
    while (end --) {
        pree = pree->next;
    }
    pre -> next = pree;
    return header;
}
#pragma mark - --------------------------------end-----------------------------------------

#pragma mark - problem 4
#pragma mark - --------------------------------satrt-----------------------------------------
/**
 * 第四个问题
 * 判断当前是否有环，有环返回起始节点，没有返回NULL
 * 思路：
 * 采用快慢指针的方法，当快指针与慢指针重合时，就存在环
 * 当快指针->NULL时，不存在环
 * 快指针比慢指针快一个节点
 */
SignalList * lc_forthListProblem(void){
    SignalList *header = lc_thirdListProblem_init();
    SignalList *slowNode = header, *fastNode = header->next;
    while (slowNode != fastNode && fastNode->next->next) {
        slowNode = slowNode->next;
        fastNode = fastNode->next->next;
    }
    if (fastNode->next) {
        // 重合存在环
        printf("此链表存在环\n");
    }else{
        // 不存在环
        printf("此链表不存在环\n");
        return NULL;
    }
    fastNode = header;
    slowNode = slowNode -> next;
    while (fastNode != slowNode) {
        slowNode = slowNode -> next;
        fastNode = fastNode -> next;
    }
    return fastNode;
}
#pragma mark - --------------------------------end-----------------------------------------
