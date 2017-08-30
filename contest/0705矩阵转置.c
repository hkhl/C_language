/*************************************************************************
	> File Name: 0705矩阵转置.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月20日 星期六 11时23分00秒
 ************************************************************************/
//3*3矩阵转置

#include<stdio.h>
#include<stdlib.h>

void init(int **pp)
{
    int num = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            pp[i][j] = num++;
        }
    }
}


void trans(int **p)
{
    int a[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            a[i][j] = p[j][i];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        putchar(10);
    }
}


void trans2(int **a)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < i; j++)
        {
            int temp = a[j][i];
            a[j][i] = a[i][j];
            a[i][j] = temp;
        }
    }
}
void output(int **pp)
{
    int num = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", pp[i][j]);
        }
        putchar(10);
    }
}
int main()
{
    int **pp = NULL;

    pp = (int **)malloc(sizeof(int*)*3);   //3行
    for(int i = 0; i < 3; i++)
    {
        pp[i] = (int *)malloc(sizeof(int)*3);//每行3个元素
    }

    init(pp);
    trans2(pp);
    output(pp);

    for(int i = 0; i < 3; i++)
    {
        free(pp[i]);
    }
    free(pp);
    return 0;
}
