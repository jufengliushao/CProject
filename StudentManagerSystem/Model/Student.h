//
//  Student.h
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#ifndef Student_h
#define Student_h

#include <stdio.h>

typedef struct StudentNode{
    char stu_name[20]; // 姓名
    int stu_age; // 年龄
    char stu_class[10]; // 班级
    char stu_id[20]; // 学生id
}Student;

#endif /* Student_h */
