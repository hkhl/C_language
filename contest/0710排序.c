/*************************************************************************
	> File Name: 0710排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月15日 星期六 09时29分36秒
 ************************************************************************/
//用指向指针的指针的方法对N个整数排序并输出（二级指针）
//小 -> 大

#include<stdio.h>
#define N 5

void sort1(int **p)    //二级指针
{
    //冒泡排序
    for(int i = 0; i < N-1; i++)  //比较N-1趟
    {
        for(int j = 1; j < N-i; j++)
        {
            if(**(p+j) < **(p+j-1))
            {
                int temp = **(p+j);
                **(p+j) = **(p+j-1);
                **(p+j-1) = temp;
            }
        }
    }
}
void sort2(int **p)
{
    //选择排序
    for(int i = 0; i < N-1; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            if(**(p+i) > **(p+j))
            {
                int temp = **(p+i);
                **(p+i) = **(p+j);
                **(p+j) = temp;
            }
        }
    }
}

int main()
{
    int a[N] = {3,4,2,1,5};
    int *pa[N];                 //指针数组
    int **pp;

    for(int i = 0; i < N; i++)
    {
        pa[i] = &a[i];          //储存数组中每个元素的地址
    }
    pp = pa;
    sort2(pp);
    
    for(int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

