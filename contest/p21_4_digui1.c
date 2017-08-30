/*************************************************************************
	> File Name: p21_4_digui1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月09日 星期日 12时06分29秒
 ************************************************************************/
//递归实现
//求 2^0+……+2^63
#include<stdio.h>
double res(int n)
{
    static double a = 1;
    static double sum = 1;
    if(n == 0)
    {
        return sum;
    }
    a = a * 2;
    sum += a;
    return res(n-1);
    
}
int main()
{
    double a = res(63);
    printf("%.2e", a);
    return 0;
}
