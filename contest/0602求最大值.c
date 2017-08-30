/*************************************************************************
	> File Name: 0602求最大值.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 18时35分28秒
 ************************************************************************/
//求三个数的最大值
#include<stdio.h>
int max(int a, int b, int c)
{
    if(a < b)            //若a不仅入两个if语句 a是最大 进入第一个if a是a，b最大的， 因为b赋值给a 
    {
        a = b;
    }
    if(a < c)             // 进入第二个if a 是 （ab）c 最大的
    {
        a = c;
    }
    return a;
}
int main()
{
    int a,b,c;
    printf("输入3个整数：");
    scanf("%d%d%d", &a, &b, &c);

    printf("最大值：%d", max(a, b, c));
    return 0;
}
