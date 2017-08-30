/*************************************************************************
	> File Name: p21_4_while.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月09日 星期日 11时52分33秒
 ************************************************************************/
//while循环
//求 2^0+……+2^63
#include<stdio.h>
int main()
{
    int i = 1;
    double sum = 1;
    double a = 1;
    while(i <= 63)
    {
        a *= 2;
        printf("%.2e,", a);
        sum += a;
        i++;
    }
    printf("%.2e", sum);
    return 0;
}
