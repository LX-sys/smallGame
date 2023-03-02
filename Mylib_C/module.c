//
// Created by Administrator on 2023/3/2.
//
#include <stdio.h>

// 输出n个星号
void liensH(){
    /*
     *  n: 是星号的数量
     *  mode:是水平还是垂直
     * */
    int star_number;
    char mode = 'v';

    printf("请输入星星数量:");
    scanf("%d",&star_number);

    if(mode=='h')
    {
        for(int i=0;i<star_number;i++){
            printf("*\n");
        }
    }else{
        for(int i=0;i<star_number;i++){
            printf("*");
        }
        printf("\n");
    }
}


// 判断是否为闰年
void isLeapYear(){
    int year;
    printf("输入年份:");
    scanf("%d", &year);
    if(year % 400 ==0 || year % 4==0 && year%100 != 0){
        printf("%d是闰年\n", year);
    } else{
        printf("%d是平年\n", year);
    }
}
