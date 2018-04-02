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

#endif /* SignalListProblem_h */
