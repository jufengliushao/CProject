//
//  GetterDataMethods.c
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#include "GetterDataMethods.h"
#include "PrintMethods.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * 获取指令
 */
char getter_setpInfo(void){
    char ch;
    print_inputString(); // 打印
    scanf("%s", &ch);
    return ch;
}

/**
 * 获取学生信息
 */
Student getter_studentInfo(void){
    Student *stu = (Student *)malloc(sizeof(Student));
    scanf("%s %s %d %s", stu->stu_id, stu->stu_name, &stu->stu_age, stu->stu_class);
    return* stu;
}
