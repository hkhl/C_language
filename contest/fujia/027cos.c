/*************************************************************************
	> File Name: 027cos.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月13日 星期三 17时47分50秒
 ************************************************************************/
//Yn = cos(cos(cos(...(cos(x)))))   n个cos
//计算Yn的值, 直到|Yn-Y(n-1)| < 10^(-6)为止, 并打印出此时共做了多少次cos计算
//提示 Y(n+1) = cos(Yn), 迭代法
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//abs 整数求绝对值
//fabs 浮点数
int f(double m, int count)
{
    if(fabs(cos(m) -m) < pow(10.0,-6))
    {
        return count+1;
    }
    else
    {
        printf("m = %lf\n", m);
        printf("cos(m) = %lf\n", cos(m));
        return f(cos(m), ++count);
    }
}
int main()
{
    int n = f(1.0, 0);

    printf("%d\n", n);

    return 0;
}
