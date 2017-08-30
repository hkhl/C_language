/*************************************************************************
	> File Name: p20_1_digui.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月07日 星期五 13时30分22秒
 ************************************************************************/
//递归 实现n的阶乘
#include<stdio.h>
int Recursion(int n);
int main()
{
    int n = 0;
    printf("请输入n的阶乘：");
    scanf("%d", &n);
    
    int res = Recursion(n);
    if(res == -1)
    {
        printf("Error!");
    }
    else
    {  
        printf("结果为：%d", res);
    }
}
int Recursion(int n)
{
    static int res = 1;

    if(n < 0)
    {
        return -1;
    }
    if(n == 0)
    {
        return 1;
    }
    if(n == 1)
    {
        return res;
    }
    else
    {
        res *= n;
        return Recursion(n-1);
    }
    /*
     if(n == 1)
     {
        return 1;
     }
     else
     {
        return n*Recursion(n-1);
     }*/
}
