/*************************************************************************
	> File Name: p4_4.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月02日 星期日 17时36分03秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a = 2;
    a %= 4 - 1;
    printf("%d, ", a);

    a += a *= a-= a*= 3;
    printf("%d", a);
    return 0;
}