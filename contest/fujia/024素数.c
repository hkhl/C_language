/*************************************************************************
	> File Name: 024素数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月12日 星期二 16时34分31秒
 ************************************************************************/
//N个正整数, 找出素数,并打印能被5整除的数
#include<stdio.h>
int sushu(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else if(num == 2)
    {
        return 0;
    }
    int flag = 1;
    for(int i = 2; i < num; i++)
    {
        if(num%i == 0) 
        {
            flag = 0; 
            return 0;
        }
    }
    if(flag == 1)
    {
        return 1;
    }
}
int main()
{
    int a[10] = {5, 10, 3, 7, 9, 1, 2, 3, 4, 5};

    for(int i = 0; i < 10; i++)
    {
        if(sushu(a[i]))
        {
            printf("%d ", a[i]);
        }
        if(a[i]%5 == 0)
        {
            printf("%%%d ", a[i]);
        }
    }

    return 0;
}
