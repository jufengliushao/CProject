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
 * 初始化链表
 * 返回头结点
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

#endif /* SignalListProblem_h */
