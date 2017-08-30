/*************************************************************************
	> File Name: 0521圆盘求和.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月30日 星期日 17时32分56秒
 ************************************************************************/
//圆盘上有20个数字，请找出哪四个相邻数之和最大
//并指出他们的起始位置及最大和的位置
//1-20位置分别是
//20 1 8 4 13 6 10 15 2 17 3 19 7 16 8 11 14 9 12 5 --> 20 1 ...

#include<stdio.h>

int main()
{
    int a[23] = {20, 1, 8, 4, 13, 6, 10, 15, 2, 17, 3, 19, 7, 16, 8, 11, 14, 9, 12, 5, 20, 1, 8}; 
    int sum = 0;
    int max = 0;
    int index_min = 0;
    int index_max = 0;

    for(int i = 0; i < 20; i++)
    {
        sum = a[i]+a[i+1]+a[i+2]+a[i+3];
        if(sum > max)
        { 
            index_min  = i + 1;
            max = sum;
        }
    }
    if(index_min > 17)
    {
        index_max = index_min - 17;    
    }
    else
    {
        index_ max = index_min + 4;
    }
    printf("%d-%d : %d",index_min, index_max, max);

    
    return 0;
}
