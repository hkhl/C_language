/*************************************************************************
	> File Name: 028平均值.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月14日 星期四 16时42分19秒
 ************************************************************************/
//已知由9个数, 求出最大值 最小值 平均值
//以及多少个数等于平均值
#include<stdio.h>

int getmax(int a[])
{
    int max = a[0];
    for(int i = 0; i < 9; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int getmin(int a[])
{
    int min = a[0];
    for(int i = 0; i < 9; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
float getave(int a[])
{
    int sum = 0;
    float ave = 0.0;
    for(int i = 0; i < 9; i++)
    {
        sum += a[i];
    }
    ave = sum / 9;
    return ave;
}

int getnum(int a[], int ave)
{
    int num = 0;
    for(int i = 0; i < 9; i++)
    {
        if (ave == a[i])
        {
            num++;
        }
    }
    return num;
}
int main()
{
    int a[9] = {4,5,4,2,3,4,1,5,6};

    printf("max = %d\n", getmax(a));
    printf("min = %d\n", getmin(a));
    printf("ave = %.2f\n", getave(a));
    printf("num = %d\n", getnum(a, getave(a)));

    return 0;
}

