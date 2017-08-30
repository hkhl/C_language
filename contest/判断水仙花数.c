/*************************************************************************
	> File Name: p21_12.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月18日 星期二 23时19分39秒
 ************************************************************************/
//判断是否是水仙花数
//一、水仙花数 一次for循环
#include<stdio.h>
int main1()
{
    int num = 0;
    int i = 0;
    int temp = 1;
    int sum = 0;
    scanf("%d", &num);
    temp = num;

    for(i = 0; i < 3; i++)
    {
        sum += (num%10)*(num%10)*(num%10);
        num /= 10; 
    }
    if(sum == temp)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

