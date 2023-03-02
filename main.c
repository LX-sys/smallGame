#include <stdio.h>
#include <math.h>
#include "Mylib_H/mySystem.h"
#include "Mylib_H/module.h"

int main() {
    // 处理中文
    processingChinese();
    // ---

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

    int options;

    isSystem();

    while(1){
        printf("[1]画星星   [2]:判断闰年  [-1]:退出\n");
        printf("请输入:");
        scanf("%d",&options);

        if(options == -1){
            break;
        }

        switch (options)
        {
            case 1:liensH();
                break;
            case 2:isLeapYear();
                break;
            default:
                break;
        }
    }
    printf("程序运行结束\n");
    return 0;
}

