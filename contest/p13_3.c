/*************************************************************************
	> File Name: p13_3.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 22时52分41秒
 ************************************************************************/
/*
 *输出三个数中最大数
 */
#include<stdio.h>
int max(int a, int b, int c)
{
    /*
    int temp = 0;
    if(a > b)
    {
        temp = a;
    }
    if(temp < c)
    {
        temp = c;
    }
    return temp;
    */


    //优化
    if(a < b)
    {
        a = b;
    }
    if(a < c)
    {
        a = c;
    }
    return a;
}
int main()
{
    int a, b, c;
    int m = 0;
    a = b = c = 0;
    scanf("%d%d%d", &a, &b, &c);

    m = max(a, b, c);
    printf("max = %d", m);
    return 0;
}
