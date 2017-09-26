/*************************************************************************
	> File Name: 050反斜线求和.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月21日 星期四 16时17分45秒
 ************************************************************************/
//求N阶方阵中各条反斜线上的元素和
//从左下开始为第一条反斜线
#include<stdio.h>
#define N 5

int sumArr[2*N-1] = { 0 };
void sum(int a[][N])
{
    int i = 0;
    //4 3 2 1 0
    for(int j = N-1; j >= 0; j--)
    {
        int m = 0;
        for(int k = j; k < N; k++)
        {
            sumArr[i] += a[k][m++];
        }
        i++;
    }

    i = N;
    for(int j = 1; j < N; j++)
    {
        int m = 0;
        for(int k = j; k < N; k++)
        {
            sumArr[i] += a[m++][k];
        }
        i++;
    }


    for(int i = 0; i < 2*N-1; i++)
    {
        printf("%d  \n", sumArr[i]);
    }
    
}
int main()
{
    int a[N][N] = {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}
    };


    sum(a);

    return 0;
}
