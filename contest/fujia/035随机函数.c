/*************************************************************************
	> File Name: 035随机函数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月16日 星期六 23时56分05秒
 ************************************************************************/
//用随机函数求出10组三位正整数 每组十个数 调用一函数打印出每组数,并编一函数求出每组最大数
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int GetMax(int a[], int n)
{
    int max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{

    time_t ts;
    srand((unsigned int)time(&ts));
    int a[10][10] = { 0 };

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            a[i][j] = rand()%900+100; // 0-899 + 100  是 100-999 三位
        }
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%3d ", a[i][j]);
        }
        putchar(10);
    }

    int max = 0;
    for(int i = 0; i < 10; i++)
    {
        max = GetMax(a[i], 10);
        printf("max[%d] = %d\n", i, max);
    }

    return 0;
}
