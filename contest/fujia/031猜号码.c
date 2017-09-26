/*************************************************************************
	> File Name: 031猜号码.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月15日 星期五 16时48分16秒
 ************************************************************************/
//由随机函数产生一个1-1000之间的整数,让人猜,
//仅回答数大 小 还是相等  当人猜对时候,  打印除人一共猜了几次

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int fun(int n)
{
    int i = 0;
    int num = 0;
    
    while(1)
    {
        printf("请输入猜测的数字:");
        scanf("%d", &num);
        //判断是否在1-9
        if(num == n)
        {
            printf("正确\n");
            return i+1;
        }
        else if(num > n)
        {
            printf("偏大\n");
        }
        else 
        {
            printf("偏小\n");
        }
        i++;
    }
}

int main()
{
    time_t ts;
    srand((unsigned int)time(&ts));
    int n = rand()%1000+1;
    printf("%d\n", n);
    printf("共用了%d次\n", fun(n));

    return 0;
}

