/*************************************************************************
	> File Name: p21_5_digui.c
    > Author: 
	> Mail: 
	> Created Time: 2017年04月10日 星期一 20时05分30秒
 ************************************************************************/
//递归实现
//求1-20阶乘的和
#include<stdio.h>
double fun(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * fun(n-1);
    }    
}

int main()
{
    double sum = 0;
    int i;

    for(i = 1; i <= 20; i++)
    {
        sum += fun(i);
    }
    printf("%e", sum);
    return 0;
}

