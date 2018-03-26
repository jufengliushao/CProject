//
//  SignalListManager.c
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#include "SignalListManager.h"
#include <stdlib.h>
#include "PrintMethods.h"
Node *header;
int listLength; // 节点长度

/**
 * 返回头结点
 */
Node list_returnHeader(void){
    if (header == NULL) {
        header = (Node *)malloc(sizeof(Node));
        header->next = NULL;
        listLength = 0;
    }
    return *header;
}

/**
 * 创建一个节点
 */
Node list_createNode(Student stu){
    Node *node = (Node *)malloc(sizeof(Node));
    node->student = stu;
    node->next = NULL;
    return *node;
}

/**
 * 返回最后的节点
 */
Node *list_lastNode(void){
    Node *node;
    list_returnHeader();
    if (header->next == NULL) {
        return header;
    }else{
        node = header->next;
    }
    while (node->next != NULL && !node) {
        node = node->next;
    }
    return node;
}

/**
 * 尾部追加节点 node
 */
void list_addNode(Node *node){
    Node *noe = list_lastNode();
    noe->next = node;
    listLength ++;
}

/**
 * 在指定节点处添加节点
 * locNode - 需要添加节点的直接前驱
 * node - 需要添加的节点
 */
void list_insertNode(Node *locNode, Node *node){
    if (list_searchNode(node) == 1) {
        print_inputErrorID();
        return;
    }
    if (list_searchNode(locNode) == 0) {
        print_inputErrorEmpty();
        return;
    }
    node->next = locNode->next;
    locNode->next = node;
}

/**
 * 判断节点是否存在
 */
int list_searchNode(Node *node){
    Node *no = header->next;
    int flag = 0;
    while (no->next != NULL && no) {
        if (no->student.stu_id == node->student.stu_id) {
            flag = 1;
            break;
        }
        no = no->next;
    }
    return flag;
}
