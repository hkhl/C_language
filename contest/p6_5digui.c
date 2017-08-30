/*************************************************************************
	> File Name: p6_5digui.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月02日 星期日 19时48分46秒
 ************************************************************************/

#include<stdio.h>
#define n 2
int fun(int x)
{
    static int sum = 0;
    if(x < 10)
        return sum+x;
    else
        sum += x%10;
        return fun(x/10);
}
int main()
{
    int x = 0;
    int a = 0;
   
    printf("请输入一个%d位整数：", n);
    scanf("%d", &x);
    
    a = fun(x);
    printf("%d", a);
    return 0;
}
