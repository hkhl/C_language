/*************************************************************************
	> File Name: p20_1(while).c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月07日 星期五 13时13分49秒
 ************************************************************************/
//while 实现n的阶乘
#include<stdio.h>
int factorial(int n); 
int main()
{
    int n;
    printf("请输入n的阶乘：");
    scanf("%d", &n);
    int res = factorial(n);
    if(res == -1)
    {
        printf("error!");
    }
    else
    {
        printf("结果为:%d", res);
    }
    return 0;
}
int factorial(int n)
{
    int s = 1;
    if(n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 1;
    }
    while(n != 0)
    {   
        s *= n;
        n--;
    }
    return s;
}
