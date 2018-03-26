//
//  PrintMethods.c
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#include <stdio.h>
#include "Student.h"
/**
 * 打印
 * s - 需要打印的数据
 */
void print_String(char s[]){
    printf("%s\n", s);
}

/**
 * 打印菜单
 */
void print_menu(){
    printf("****************************************\n");
    printf("**************Student System*************\n");
    printf("*******1.录入学生信息\n");
    printf("*******2.打印学生信息\n");
    printf("*******3.退出学生关系系统\n");
    printf("****************************************\n");
}

/**
 * 打印得到学生信息
 */
void print_getStudentInfo(){
    printf("请输入学生信息: 学号(唯一) 姓名 年龄 班级\n");
}

/**
 * 打印输入命令
 */
void print_inputString(){
    printf("请输入需要执行的指令:");
}

/**
 * 添加重复id
 */
void print_inputErrorID(void){
    printf("输入的学号重复，请检查后重试!");
}

/**
 * 添加直接前驱空白
 */
void print_inputErrorEmpty(void){
    printf("插入位置不存在!");
}

/**
 * 打印学生信息
 */
void print_studentInfoLog(Student stu){
    printf("\nStudent ID\t%s\n", stu.stu_id);
    printf("Student Name\t%s\n", stu.stu_name);
    printf("Student Class\t%s\n", stu.stu_class);
    printf("Student Age\t%d\n\n", stu.stu_age);
}
