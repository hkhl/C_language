/*************************************************************************
	> File Name: 0604行列互换.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 18时44分42秒
 ************************************************************************/
//矩阵的转置
//给定3*3矩阵实现行列互换
/*
 * 1 2 3       1 4 7
 * 4 5 6  ->   2 5 8
 * 7 8 9       3 6 9
 */
//观察可得 对角线两边交换即可
#include<stdio.h>
void trans(int a[][3])
{
    int temp = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = i; j < 3; j++)
        {
            if(i != j)
            {
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }

}
int main()
{
    int a[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    trans(a);

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        putchar(10);
    }

    return 0;
}
