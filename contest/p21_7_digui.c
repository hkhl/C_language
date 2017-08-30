/*************************************************************************
	> File Name: p21_7_digui.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月18日 星期二 17时07分22秒
 ************************************************************************/
//递归找出10个数的最值

#include<stdio.h>

int max(int x[], int n)
{
    if(n <= 0)
    {
        return x[0];
    }
    else if(x[n] > max(x,n-1))
    {
        return x[n];
    }
    else
    {
        return max(x, n-1);
    }
}
int min(int x[], int n)
{
    if(n <= 0)
    {
        return x[0];
    }
    else if(x[n] < max(x,n-1))
    {
        return x[n];
    }
    else
    {
        return min(x, n-1);
    }
}

int main()
{
    int x[] = {0,10,3,5,1,6,-10,90,9,-4};
    
    int a = max(x, 10-1);
    int b = min(x, 10-1);
    printf("max = %d, min = %d", a, b);

    return 0;
}
