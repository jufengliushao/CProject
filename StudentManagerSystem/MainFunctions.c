//
//  MainFunctions.c
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#include "MainFunctions.h"
#include "SignalListManager.h"
#include "PrintMethods.h"
#include "GetterDataMethods.h"
#include "SignalListManager.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * 选择
 */
void main_switchMethods(char ch){
    if(ch == ' '){
        getter_setpInfo();
    }
    switch(ch){
        case '1':{
            // 录入
            main_inputStudentInfo();
        }
            break;
            
        case '2':{
            // 打印
            main_printAll();
        }
            break;
            
        case '3':{
            // 退出
            main_exitPro();
        }
            break;
            
        default:{
             main_menuShow();
        }
            break;
    }
}

/**
 * 退出程序
 */
void main_exitPro(void){
    exit(0);
}

/**
 * 输入学生信息
 */
void main_inputStudentInfo(void){
    print_getStudentInfo();
    Student stu = getter_studentInfo();
    Node node = list_createNode(stu);
    list_addNode(&node);
    main_menuShow();
}

/**
 * 展示菜单
 */
void main_menuShow(void){
    char ch;
    print_menu();
    ch = getter_setpInfo();
    main_switchMethods(ch);
}

/**
 * 打印所有数据
 */
void main_printAll(void){
    Node header = list_returnHeader();
    Node *node = header.next;
    while (node) {
        print_studentInfoLog(node->student);
        node = node->next;
    }
    main_menuShow();
}
