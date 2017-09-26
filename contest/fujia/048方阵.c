/*************************************************************************
	> File Name: 048方阵.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月20日 星期三 15时30分01秒
 ************************************************************************/
//打印N*N方阵    例如N = 8
//1 1 1 1 1 1 1 1
//1 2 2 2 2 2 2 1
//1 2 3 3 3 3 2 1
//1 2 3 4 4 3 2 1
//1 2 3 4 4 3 2 1
//1 2 3 3 3 3 2 1
//1 2 2 2 2 2 2 1
//1 1 1 1 1 1 1 1 
#include<stdio.h>
#define N 10

void fun(int a[][N], int flag, int size) //递归实现
{
    if(size == 0)
    {
        return ;
    }
    for(int i = N-size; i < size; i++)
    {
        a[i][N-size] = a[N-size][i] = a[size-1][i] = a[i][size-1] = flag;
    }
    fun(a, ++flag, --size);

}
int main()
{
    int a[N][N] = { 0 };
    int flag = 1;


    fun(a, flag, N); 

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

