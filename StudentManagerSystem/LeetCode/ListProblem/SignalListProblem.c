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

#pragma mark - problem 5
#pragma mark - --------------------------------satrt-----------------------------------------
/**
 * 第五个问题
 * 找到两个单链表的相交节点
 * 要求 空间复杂度无O(1) 时间复杂度为O(n)
 * 思路：
 * 找到两个节点的较小节点，并将较长链表的头指针与短链表对齐
 * 然后同时进行寻找，当找到一样的节点时，即为焦点
 */
void lc_fifthListProblem(void){
    SignalList *headA = (SignalList *)malloc(sizeof(SignalList));
    SignalList *headB = (SignalList *)malloc(sizeof(SignalList));
    SignalList *minNode = headA, *maxNode = headB;
    int lengthA = 0, lengthB = 0, mini = 0, max = 0, diff = 0;
    headA->data = headB->data = 0;
    headA->next = headB->next = NULL;
    lc_fifthListProblem_init(headA, headB);
    lc_firstListProblem_print(headA);
    lc_firstListProblem_print(headB);
    lengthA = lc_fifthListProblem_length(headA->next);
    lengthB = lc_fifthListProblem_length(headB->next);
    mini = lengthB > lengthA ? lengthA : lengthB;
    max = lengthB < lengthA ? lengthA : lengthB;
    minNode = lengthB > lengthA ? headB : headA;
    maxNode = lengthB < lengthA ? headB : headA;
    diff = max - mini;
    while (diff --) {
        minNode = minNode ->next;
    }
    lc_firstListProblem_print(minNode);
    while (minNode && maxNode) {
        minNode = minNode -> next;
        maxNode = maxNode -> next;
        if (minNode == maxNode) {
            break;
        }
    }
    printf("%p:%d\n", minNode, minNode->data);
}

/**
 * 链表初始化
 * 初始化两个具有相交节点的链表
 * headerA - 链表A
 * headerB - 链表B
 */
void lc_fifthListProblem_init(SignalList *headerA, SignalList *headerB){
    int a[] = {2, 3, 4, 5, 6};
    int b[] = {7, 8, 9};
    int c[] = {10, 11, 12};
    SignalList *head = headerA;
    for (int i = 0; i < 5; i ++) {
        SignalList *node = (SignalList *)malloc(sizeof(SignalList));
        node->data = a[i];
        node->next = NULL;
        head -> next = node;
        head = node;
    }
    SignalList *headb = headerB;
    for (int i = 0; i < 3; i ++) {
        SignalList *node = (SignalList *)malloc(sizeof(SignalList));
        node->data = b[i];
        node->next = NULL;
        headb -> next = node;
        headb = node;
    }
    SignalList *headG = (SignalList *)malloc(sizeof(SignalList));
    headG->next = NULL;
    headG->data = 0;
    SignalList *hedd = headG;
    for (int i = 0; i < 3; i ++) {
        SignalList *node = (SignalList *)malloc(sizeof(SignalList));
        node->data = c[i];
        node->next = NULL;
        headG -> next = node;
        headG = node;
    }
    headb->next = head->next = hedd->next;
}

/**
 * 计算链表的长度
 */
int lc_fifthListProblem_length(SignalList *head){
    int length = 0;
    while (head) {
        length ++;
        head = head->next;
    }
    return length;
}
#pragma mark - --------------------------------end-----------------------------------------
