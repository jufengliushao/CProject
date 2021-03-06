//
//  MainFunctions.h
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#ifndef MainFunctions_h
#define MainFunctions_h

#include <stdio.h>
/**
 * 选择
 */
void main_switchMethods(char ch);

/**
 * 退出程序
 */
void main_exitPro(void);

/**
 * 输入学生信息
 */
void main_inputStudentInfo(void);

/**
 * 展示菜单
 */
void main_menuShow(void);

/**
  * 打印所有数据
  */
void main_printAll(void);

/**
 * 打印现有学号
 */
void main_printAllNo(void);

/**
 * 录入管理员
 */
void main_addManager(void);

/**
 * 获取所有管理员
 */
void mian_getAllManager(void);
#endif /* MainFunctions_h */
