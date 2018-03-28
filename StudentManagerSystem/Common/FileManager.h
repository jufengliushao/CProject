//
//  FileManager.h
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#ifndef FileManager_h
#define FileManager_h

#include <stdio.h>

/**
 * 打开一个文件
 */
int file_openFile(char *path);

/**
 * 关闭一个文件
 */
int file_closeFile(void);

/**
 * 写数据到文件
 */
void file_writeData(char *data);

/**
 * 创建文件
 */
int file_createFile(char *path);

/**
 * 读取数据
 */
void file_readData(void);
#endif /* FileManager_h */
