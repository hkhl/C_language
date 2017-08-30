/*************************************************************************
	> File Name: 0611素数排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 20时00分07秒
 ************************************************************************/

#include<stdio.h>
//选择排序
void selectsort(int a[],int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min = i;
        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}
//判断素数
int prime(int num, int b[])
{
    int i = 0;
    static int j = 0;
    if(num == 1)
    {
        return 0;
    }
    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;        //不是素数
        }
    }
    if(i >= num)
    {
        b[j++] = num;
        return 1;
    }
}
int main()
{
    int a[20] = {5,1,2,97,4,3,2,17,19,34,2,34,53,41,91,31,23,8,45,34};
    int b[20] = {0};
    int flag = 0;
    int len = 0;
    
    for(int i = 0; i < 20; i++)
    {
        flag = prime(a[i], b);
        len += flag;
    }
   printf("%d       ",len); 
    selectsort(b, len);
    
    for(int i = 0; i < len; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
