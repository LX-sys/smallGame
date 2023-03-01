#include <stdio.h>
#include <math.h>
#include "Mylib_H/mySystem.h"
#define bool int

// 输出n个星号
void liensH(int n,char mode){
    /*
     *  n: 是星号的数量
     *  mode:是水平还是垂直
     * */
    if(mode=='v')
    {
        for(int i=0;i<n;i++){
            printf("*\n");
        }
    }else{
        for(int i=0;i<n;i++){
            printf("*");
        }
        printf("\n");
    }
}

// 判断是否为闰年test
bool isLeapYear(int year){
    if(year % 400 ==0 || year % 4==0 && year%100 != 0){
        return 1;
    } else{
        return 0;
    }
}


int main() {
    const float PL = 3.14f;
    char names[] = "Liu Xuan";
    float decimal = 3.14f;
    printf("PL=%0.2f\n",PL);
    printf("my name is \"%s\"\n",names);
    printf("2^5=%d\n", (int)pow(2,5));
    printf("小数:%0.2f\n",decimal);

    char inputName[20];
    printf("输入名称:");
    fgets(inputName,20,stdin);
    printf("名字是:%s\n",inputName);

    // -----以上是学习内容
//    processingChinese();

    int options;
    int year;
    int star;

    isSystem();


    while(1){
        printf("[1]画星星   [2]:判断闰年  [-1]:退出\n");
        printf("请输入:");
        scanf("%d",&options);

        if(options==-1)
            break;
        if(options==1){
            printf("请输入星星数量:");
            scanf("%d",&star);
            liensH(star,'h');
        }
        else if(options==2) {
            printf("输入年份:");
            scanf("%d", &year);
            if (year == -1) {
                break;
            }
            if (isLeapYear(year) == 1) {
                printf("%d是闰年\n", year);
            } else {
                printf("%d是平年\n", year);
            }
        } else{
            printf("异常退出!\n");
            break;
        }

    }
    printf("程序运行结束\n");
    return 0;
}

