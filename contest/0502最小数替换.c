/*************************************************************************
	> File Name: 0502最小数替换.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月27日 星期四 20时35分42秒
 ************************************************************************/
//数组内放10个整数,找到最小的和其下标
//把它和第一个元素交换位置
#include<stdio.h>
void swap(int a[], int m, int n)
{
    int s = a[m];
    a[m] = a[n];
    a[n] = s;
}
void Find_Min_ex(int a[], int n)
{
    int min = 0;
    a[min] = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] < a[min])
        {
            min = i;
        }
    }
    
    swap(a,min,0);
}
int main()
{
    int a[10] = {3,2,4,7,6,9,8,1,0,5};
    
    Find_Min_ex(a, 10);
   
    for(int i = 0; i < 10; i ++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
