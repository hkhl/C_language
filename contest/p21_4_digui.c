/*************************************************************************
	> File Name: p21_4_digui.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月09日 星期日 11时54分12秒
 ************************************************************************/
//递归实现
//求 2^0+……+2^63          
#include<stdio.h>
#include<math.h>
double res(int n)
{
    static double sum = 0;
    if(n == 0)
    {
        return sum + 1;
    }
    double a = pow(2, n);
    sum += a;
    return res(n-1);

    /*if(n == 0)
    {
        return 2;
    }
    else
    {
        return 2 * res(n-1);
    }*/            //2的64次方
}

int main()
{
    double a = res(63);
    printf("%.2e", a);
    return 0;
}
