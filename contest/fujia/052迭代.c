/*************************************************************************
	> File Name: 052迭代.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月22日 星期五 11时36分03秒
 ************************************************************************/
//用简单迭代法解方程  e^x  -  x  - 2 = 0
//它有两个根 , 其迭代公式为:
//1)x[n+1] = e^x * n - 2  (初值X < 0)
//2)x[n+1] = ln(x[n] + 2) (初值x > 0)
//注:本程序中选取初值X0不同时, 要分别使用公式1或者公式2迭代,  得原方程 < 0 或者 > 0的解
#include<stdio.h>
#include<math.h>
#define E 2.74
float fun1(float x, float n)
{
    return pow(E, x) * n - 2;
}

float fun2(float n)
{
    if(n <= 0)
    {
        return 2;
    }
    else
    {
        return log10f(fun2(n-1) + 2);
    }

}

int main()
{
    float x = 10;
    float n = 20;

    if(x < 0)
    {
        printf("%.2f \n", fun1(x, n));
    }
    else
    {
        printf("%.2f \n", fun2(n));    
    }

    return 0;
}
