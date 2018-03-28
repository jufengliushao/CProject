//
//  FileManager.c
//  StudentManagerSystem
//
//  Created by fumed on 2018/3/26.
//  Copyright © 2018年 fumed. All rights reserved.
//

#include "FileManager.h"
FILE *fp;
/**
 * 打开一个文件
 */
int file_openFile(char *path){
    fp = fopen(path, "r+");
    if (fp != NULL) {
        return 1;
    }
    if (file_createFile(path)) {
        // 打开成功
        file_closeFile();
        file_openFile(path);
    }
    return 0;
}

/**
 * 创建文件
 */
int file_createFile(char *path){
    fp = fopen(path, "w");
    if (fp != NULL) {
        return 1;
    }
    return 0;
}

/**
 * 关闭一个文件
 */
int file_closeFile(void){
    if (fclose(fp) == 0) {
        return 1;
    }
    return 0;
}

/**
 * 写数据到文件
 */
void file_writeData(char *data){
    printf("%d", fputs(data, fp));
}

/**
 * 读取数据
 */
void file_readData(void){
    char result[20];
    fgets(result, 20, fp);
}
