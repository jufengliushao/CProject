//
//  SignalListManager.h
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#ifndef SignalListManager_h
#define SignalListManager_h

#include <stdio.h>
#include "Student.h"

typedef struct  SignalListNode{
    Student student;
    struct SignalListNode *next;
}Node;

/**
 * 返回头结点
 */
Node list_returnHeader(void);

/**
 * 返回最后的节点
 */
Node *list_lastNode(void);

/**
 * 创建一个节点
 */
Node list_createNode(Student stu);

/**
 * 尾部追加节点 node
 */
void list_addNode(Node *node);

/**
 * 判断节点是否存在
 */
int list_searchNode(Node *node);

#endif /* SignalListManager_h */
