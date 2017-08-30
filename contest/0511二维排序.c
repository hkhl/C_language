/*************************************************************************
	> File Name: 二维排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月28日 星期五 16时43分52秒
 ************************************************************************/
//二维数组 每一行冒泡法排序 由小到大
//对第一列由小到大排序

#include<string.h>
#include<stdio.h>
//void swap(int a[][], )
void sort(int a[][4], int n)
{
    int temp = 0;
    int i = 0;
    for(int i = 0; i < n; i++)           //对每一行进行排序
    {
        for(int k = 0; k < n-1; k++)        //控制每一行比较次数
        {
            for(int j = 1; j < n-k; j++)
            {
                if(a[i][j] < a[i][j-1])
                {
                    temp = a[i][j];
                    a[i][j] = a[i][j-1];
                    a[i][j-1] =temp;
                }
            }
        }
    }

    //对列进行排序a[i][0];
    //列中每一个元素都要换
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 1; j < n-i; j++)
        {
            if(a[j][0]< a[j-1][0])
            {
                for(int k = 0; k < 4; k++)      //交换每行的元素
                {
                    temp = a[j][k];
                    a[j][k] = a[j-1][k];
                    a[j-1][k] = temp;
                }
            }
        }
    }
}
int main()
{
    int a[4][4] = {{14,16,13,15},
                   {5,6,7,8},
                   {11,9,10,12},
                    {2,3,4,1}};

   
     sort(a, 4);

    //输出
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        putchar(10);
    }


    return 0;
}
