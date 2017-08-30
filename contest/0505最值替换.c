/*************************************************************************
	> File Name: 0505最值替换.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月27日 星期四 22时09分31秒
 ************************************************************************/
//N个数的数组 找出最小 换到第一个位置
//找出最大 换到最后一个位置
#include<stdio.h>
void swap(int a[], int m, int n)
{
    int s = a[m];
    a[m] = a[n];
    a[n] = s;
}
void fun(int a[], int l)
{
    int i = 0;
    int min = 0;
    int max = 0;
    a[min] = a[max] = a[0];
    
    for(i = 0; i < l; i++)
    {
        if(a[i] > a[max])
        {
            max = i;
        }
        if(a[i] < a[min])
        {
            min = i;
        }
    }
    swap(a, min, 0);
    if(max == 0)//如果最大值在第一位置
    {
        max = min;
    }
    swap(a, max, l-1);

    //打印
    for(i = 0; i < l; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[] = {22,6,4,3,21,22};
    int len = sizeof(a)/sizeof(int);

    fun(a, len);

    return 0;
}
