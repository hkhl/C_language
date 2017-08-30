/*************************************************************************
	> File Name: p13_7.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 23时55分33秒
 ************************************************************************/
/*
 * 分段函数
 */
#include<stdio.h>
int main()
{
    double x = 0;
    double y = 0;

    printf("输入x:");
    scanf("%lf", &x);

    if(0 <= x && x < 15)
    {
        y = 40.0 / 15 * x + 10; //x*40/15+10;
        printf("y = %lf", y);
    }
    else if(15 <= x && x < 30)  //else if(x < 30)
    {
        printf("y = 50");
    }
    else if(30 <= x && x < 45)//else if(x < 45)
    {
        y = 50 - 10.0 / 15 * (x - 30);
        printf("y = %lf", y);
    }
    else if(45 <= x && x < 75)//else if(x < 75)
    {
        y = 40 + 20.0 / 30 * (x - 45);
        printf("y = %lf", y);
    }
    else if(75 <= x && x < 90)//else(if x < 90)
    {
        y = 60 - 10.0 / 15 * (x - 75);
        printf("y = %lf", y);
    }
    else
    {
        printf("无意义");
    }
    return 0;
}
