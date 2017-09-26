/*************************************************************************
	> File Name: 018矩阵.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月09日 星期六 11时06分35秒
 ************************************************************************/
//8*8矩阵
//i = j  a[i][j] = M
//i < j  a[i][j] = i+j
//i > j  a[i][j] = i*j
//求矩阵和
#define M  111
#include<stdio.h>

int main()
{
    int a[8][8] = {0};
    int sum = 0;
    for(int i = 0; i < 8; i++)
    {
        a[i][i] = M;
        for(int j = 0; j < 8; j++)
        {
            if(i < j)
            {
                a[i][j] = i+j;
            }
            else if (i > j)
            {
                a[i][j] = i*j;
            }
        }
    }

    int i = 0;
    for(int *p = &a[0][0]; p < &a[0][0] + 64; p++)
    {
        sum += *p; 
        printf("%d  ", *p);
         i++;
        if(i%8 == 0)
        {
            putchar(10);
        }
    }
    printf("\nsum = %d\n", sum);

    return 0;
}
