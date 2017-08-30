/*************************************************************************
	> File Name: 004奇偶求平均.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月20日 星期日 20时27分14秒
 ************************************************************************/
//将一组非0整数中的奇数 偶数平均值计算出来, 用0来作为结束标记
#include<stdio.h>

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    int size = sizeof(a)/sizeof(int);
    int sum1 = 0;
    int sum2 = 0;
    int n = 0;
    int i = 0;

    while(a[i])
    {
        if(a[i] % 2) //奇数
        {
            n++;
            sum1 += a[i];
        }
        else
        {
            sum2 += a[i];
        }
        i++;
    }

    printf("奇数平均值 %.2f  偶数平均值 %.2f", (float)sum1/n, (float)sum2/(size - n - 1));

    return 0;
}
