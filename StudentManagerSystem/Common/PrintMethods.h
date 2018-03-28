//
//  PrintMethods.h
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#ifndef PrintMethods_h
#define PrintMethods_h
#include <stdio.h>
#include "Student.h"
/**
 * 打印
 * s - 需要打印的数据
 */
void print_String(char s[]);

/**
 * 打印
 * s - 需要打印的数据 - 不换行
 */
void print_StringNotLine(char s[]);

/**
 * 打印菜单
 */
void print_menu(void);

/**
 * 打印得到学生信息
 */
void print_getStudentInfo(void);

/**
 * 打印输入命令
 */
void print_inputString(void);

/**
 * 添加重复id
 */
void print_inputErrorID(void);

/**
 * 添加直接前驱空白
 */
void print_inputErrorEmpty(void);

/**
 * 打印学生学号信息
 */
void print_studentIDLog(Student stu);

/**
 * 打印学生信息
 */
void print_studentInfoLog(Student stu);

/**
 * 无数据
 */
void print_emptyData(void);
#endif /* PrintMethods_h */
