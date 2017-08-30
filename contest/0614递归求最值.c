/*************************************************************************
	> File Name: 0614递归求最值.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 20时51分41秒
 ************************************************************************/
//递归求最值，
//并指出其位置
#include<stdio.h>
int fun(int a[], int n, int max)
{
    if(n == 1)
    {
        return max;
    }
    else if(a[max] < a[n-1])
    {
        max = n-1;
        fun(a,n-1,max);
    }
    else
    {
        fun(a,n-1,max);
    }
}
int main()
{
    int a[5] = {2,3,6,7,3};
    //int max = 0;

    int max =  fun(a, 5, max);

    printf("位置：%d 值：%d", max, a[max]);

    return 0;
}
