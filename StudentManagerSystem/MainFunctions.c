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
#include "FileManager.h"
#include "CommonSetting.h"
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
            // 打印学号
            main_printAllNo();
        }
            break;
            
        case '4':{
            // 管理员登录
            mian_getAllManager();
        }
            break;
            
        case '5':{
            // 管理员录入
            main_addManager();
        }
            break;
            
        case '6':{
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
    if (list_searchNode(&node) == 1) {
        print_inputErrorID();
        return;
    }else{
        list_addNode(&node);
    }
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
    if (node == NULL) {
        print_emptyData();
    }
    while (node) {
        print_studentInfoLog(node->student);
        node = node->next;
    }
    main_menuShow();
}

/**
 * 打印现有学号
 */
void main_printAllNo(void){
    Node header = list_returnHeader();
    Node *node = header.next;
    if (node == NULL) {
        print_emptyData();
    }
    while (node) {
        print_studentIDLog(node->student);
        node = node->next;
    }
    main_menuShow();
}

/**
 * 录入管理员
 */
void main_addManager(void){
    char *account, *password;
    print_StringNotLine("请输入账号：");
    account = getter_string();
    print_StringNotLine("请输入密码：");
    password = getter_string();
    if (file_openFile(managerPath) == 1) {
        file_writeData(account);
        file_writeData(password);
    }
}

/**
 * 获取所有管理员
 */
void mian_getAllManager(void){
    file_openFile(managerPath);
    file_readData();
}
