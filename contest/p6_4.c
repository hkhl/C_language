/*************************************************************************
	> File Name: p6_4.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月02日 星期日 19时09分49秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
    double a=2, b=2, c=2;
    double sum,ave,a2,b2,c2,sq;
    sum = a+b+c;
    ave = sum/3;
    a2 = a*a;
    b2 = b*b;
    c2 = c*c;
    sq = sqrt(a2+b2+c2);
    printf("%lf,%lf,%lf", sum, ave, sq);
    return 0;
}
