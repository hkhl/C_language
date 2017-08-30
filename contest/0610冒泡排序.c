/*************************************************************************
	> File Name: 0610冒泡排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 19时53分32秒
 ************************************************************************/
//冒泡排序 小->大
#include<stdio.h>
void bubblesort(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 1; j < n-i; j++)
        {
            if(a[j] < a[j-1])
            {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {1,4,6,5,2,3};
    int len = sizeof(a)/sizeof(int);

    bubblesort(a, len);

    for(int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
