//
//  GetterDataMethods.h
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#ifndef GetterDataMethods_h
#define GetterDataMethods_h
#include <stdio.h>
#include "Student.h"

/**
 * 获取指令
 */
char getter_setpInfo(void);

/**
 * 获取学生信息
 */
Student getter_studentInfo(void);

/**
 * 获取字符串
 */
char *getter_string(void);

#endif /* GetterDataMethods_h */
