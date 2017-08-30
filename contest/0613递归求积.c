/*************************************************************************
	> File Name: 0613递归求积.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 20时47分50秒
 ************************************************************************/
//题如其名
#include<stdio.h>
int fun(int a[], int n)
{
    if(n == 1)
    {
        return a[n-1];
    }
    else
    {
        return a[n-1]*fun(a, n-1);
    }
}
int main()
{
    int a[5] = {2,2,2,2,2};
    printf("%d", fun(a,5));
    return 0;
}
