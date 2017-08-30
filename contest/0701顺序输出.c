/*************************************************************************
	> File Name: 0701顺序输出.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月09日 星期二 22时23分55秒
 ************************************************************************/
//输入3个整数 按小到大的顺序输出
#include<stdio.h>
void swap(int a[], int m, int n)
{
    int temp = a[m];
    a[m] = a[n];
    a[n] = temp;
}

void Sort(int a[], int n)
{
    int min;
    int max;
    min = max = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > a[max])
        {
            max = i;
        }
        else if(a[i] < a[min])
        {
            min = i;
        } 
    }
    swap(a, 0, min);
    if(max == 0)
    {
        max = min;
    }
    swap(a, n-1, max);
}

void Print(int a[], int n)
{
    for(int i = 0; i <  3; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[3] = {0};
    printf("please input three numbers:");
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
 
    Sort(a, 3);

    Print(a, 3);

    return 0;
}
