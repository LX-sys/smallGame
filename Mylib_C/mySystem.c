//
// Created by Administrator on 2023/3/1.
//
#include <stdio.h>
#include <stdlib.h>
#define bool int

// 判断操作系统
bool isSystem(){
    #ifdef _WIN32
        #ifdef _WIN64
//                printf("win64 system\n");
                return 64;
            #else
//                printf("win32 system\n");
                return 32;
            #endif
    #elif __MACH__
          return 1;
//        printf("MacOS system\n");
    #endif
        return 0;
}


// 处理中文
int processingChinese(){
    /*
     * 处理CLion在Win下使用WinGW作为编译器时的中文问题
     *
     * */
    if(isSystem() >=32){
        // 这句话是在 win下使用WinGW编译器的时候支持中文输出
        system("chcp 65001");
    }
    return 0;
}