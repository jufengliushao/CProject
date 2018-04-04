//
//  SignalListProblem.h
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/28.
//  Copyright © 2018年 fumed. All rights reserved.
//

#ifndef SignalListProblem_h
#define SignalListProblem_h

#include <stdio.h>

typedef struct lc_signalList{
    struct lc_signalList *next;
    int data;
}SignalList;

/**
 * 第一题
 * 翻转单链表
 * 不可添加新节点
 * eg: 1->2->3->4->5
 * result: 5->4->3->2->1
 */
SignalList * lc_firstListProblem_init(void);

/**
 * 打印所有数据
 * 第一个结点
 */
void lc_firstListProblem_print(SignalList *header);

/**
 * 第一题
 * 翻转单链表
 * 不可添加新节点
 */
void lc_firstListProblem(void);

/**
 * 第二个问题
 * 对链表中的部分进行翻转，不可添加新的节点
 * start 起始位置(从1开始计数)
 * end 结束位置 - 默认参数合法
 * eg: 1->2->3->4->5->6->7->8 start=1 end=4
 * result: 4->3->2->1->5->6->7->8
 */
void lc_secodListProblem(void);

/**
 * 初始化具有环的单链表
 */
SignalList *lc_thirdListProblem_init(void);

/**
 * 第三个问题
 * 判断当前是否有环
 * 思路：
 * 采用快慢指针的方法，当快指针与慢指针重合时，就存在环
 * 当快指针->NULL时，不存在环
 * 快指针比慢指针快一个节点
 */
void lc_thirdListProblem(void);

/**
 * 第四个问题
 * 判断当前是否有环，有环返回起始节点，没有返回NULL
 * 思路：
 * 采用快慢指针的方法，当快指针与慢指针重合时，就存在环
 * 当快指针->NULL时，不存在环
 * 快指针比慢指针快一个节点
 */
SignalList * lc_forthListProblem(void);

/**
 * 第五个问题
 * 找到两个单链表的相交节点
 * 要求 空间复杂度无O(1) 时间复杂度为O(n)
 * 思路：
 * 找到两个节点的较小节点，并将较长链表的头指针与短链表对齐
 * 然后同时进行寻找，当找到一样的节点时，即为焦点
 */
void lc_fifthListProblem(void);

/**
 * 链表初始化
 * 初始化两个具有相交节点的链表
 * headerA - 链表A
 * headerB - 链表B
 */
void lc_fifthListProblem_init(SignalList *headerA, SignalList *headerB);

/**
 * 计算链表的长度
 */
int lc_fifthListProblem_length(SignalList *head);

#endif /* SignalListProblem_h */
