/*************************************************************************
	> File Name: 0522和素数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月30日 星期日 18时04分42秒
 ************************************************************************/
//1~100之间，   ->1->2->3->4->      将其排成一圈 每两个和都是素数
//从1~100间 连续取n个数 即 1~n满足上述条件的最大n是多少？
#include<stdio.h>
int main()
{
    int a[100];
    int b[100] = {0};
    int n = 0;
    int max = b[0];

    for(int i = 0; i < 100; i++)
    {
        a[i] = i+1;
    }

    for(int i = 0; i < 100; i++)
    {
        int n = 1;
        for(int j = 2; j < i+1; j++)
        {
            if((a[i]+a[i+1]) % j != 0)
            {
                n++;
                if((a[i+1] + a[i+1-n]) % j != 0)
                {
                    b[i] = n;
                }
            }
        }
    }

    for(int i = 0; i < 100; i ++)
    {
        //printf("%d ", b[i]);
    }
    return 0;
}
