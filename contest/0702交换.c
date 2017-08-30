/*************************************************************************
	> File Name: 0702交换.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 16时14分09秒
 ************************************************************************/
//10个整数 将最小的数字与第一个交换
//将最大的数字与最后一个数交换
//写三个函数
//输入10个数   进行处理   输出10个数
#include<stdio.h>
void swap(int arr[], int n, int m)
{
    int temp = arr[n];
    arr[n] = arr[m];
    arr[m] = temp;
}

void input(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}


void change(int arr[], int n)
{
    int min, max;
    min = max = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[max])
        {
            max = i;
        }
        else if(arr[i] < arr[min])
        {
            min = i;
        }
    }

    swap(arr, 0, min);
    if(max == 0)
    {
        max = min;
    }
    swap(arr, n-1, max);
}

void output(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}
int main()
{
    int a[10] = {0};
    input(a, 10);

    change(a, 10);
    output(a, 10);
    return 0;
}
