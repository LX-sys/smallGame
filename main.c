#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <pthread.h>
#include "Mylib_H/mySystem.h"
#include "Mylib_H/module.h"


// 初始化
void Init(){
    int options;

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
}

void myfun1(void){
    for(int i=0;i<10;i++){
        printf("线程一号执行:%d\n", i);
    }
}

void myfun2(void){
    for(int i=0;i<10;i++){
        printf("线程二号执行:%d\n", i);
    }
}

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
    printf("输入名称:\n");
    fgets(inputName,20,stdin);
    printf("名字是:%s\n"                                                                                                                                                                                                           ,inputName);

    // -----以上是学习内容

    size_t a = 10;
    printf("MB_CUR_MAX:%d\n",MB_CUR_MAX);
    printf("size_t a=%lld\n",a);
    // -------学习win下多线程内容
    pthread_t th;
    pthread_t th2;
    pthread_create(&th,NULL,(void*)myfun1,NULL);
    pthread_create(&th2,NULL,(void*)myfun1,NULL);
    pthread_join(th,NULL);
    pthread_join(th2,NULL);

//    Init();
    return 0;
}

