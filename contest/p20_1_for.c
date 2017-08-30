/*************************************************************************
	> File Name: p20_1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月07日 星期五 13时02分20秒
 ************************************************************************/
//计算n的阶乘 for循环实现
#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("请输入n的阶乘：");
    scanf("%d", &n);
 
    if(n < 0)
    {
        printf("Error!");
    }
    else
    {
        printf("结果为：%d", factorial(n));
    }
    return 0;
}
int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    for(int i = n-1; i > 0; i--)
    {
        n *= i;
    }
    return n;

}
