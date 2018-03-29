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
SignalList * lc_firstListProblem_init();

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
void lc_firstListProblem();

/**
 * 第二个问题
 * 对链表中的部分进行翻转，不可添加新的节点
 * start 起始位置(从1开始计数)
 * end 结束位置 - 默认参数合法
 * eg: 1->2->3->4->5->6->7->8 start=1 end=4
 * result: 4->3->2->1->5->6->7->8
 */
void lc_secodListProblem();

#endif /* SignalListProblem_h */
