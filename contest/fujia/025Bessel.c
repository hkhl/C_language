/*************************************************************************
	> File Name: 025Bessel.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月13日 星期三 17时24分09秒
 ************************************************************************/
 //Bessel函数Jn(X)有以下递推关系
 //J(n+1)(x)  = (2n+1)*j(n)(x)/x - j(n-1)(x)
 //已知
 //J0(x) = sinx/x
 //J1(x) = sinx/x^2 - cosx/x
 //编写程序,利用递推关系,由任意的n和x != 0 求 Jn(x);
 //不允许使用数组
#include<stdio.h>
#include<math.h>

double Bessel(int n, double x)
{
    if(n == 1)
    {
        return sin(x)/x;
    }
    else if(n == 2)
    {
        return sin(x)/(x*x) - cos(x)/x;
    }
    else 
    {
        return (2*n+1) / x * Bessel(n-1, x) - Bessel(n-2, x);
    }
}
int main()
{
    int n = 12;
    double x = 1;

    double result;

    if(x != 0)
    {
        result = Bessel(n, x);
        printf("%lf", result);
    }
    else
    {
        printf("The funcation Bessel's is went to  ∞ ！\n");
    }

    return 0;
}

