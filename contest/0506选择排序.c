/*************************************************************************
	> File Name: 0506选择排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月27日 星期四 22时20分51秒
 ************************************************************************/
//10个整数 由大到小排序
//选择排序
#include<stdio.h>
void swap(int a[], int m, int n)
{
    int s = a[m];
    a[m] = a[n];
    a[n] = s;
}
void SelectSort(int a[], int len)
{
    int i = 0;
    int j = 0;

    for(i = 0; i < len-1; i++)
    {
        for(j = i+1; j < len; j++)
        {
            if(a[j] > a[i])
            {
                swap(a, i, j);
            }
        }
    }

    for(i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }


}
int main()
{
    int a[10] = {5,3,7,2,6,4,9,1,8,0};
    
    SelectSort(a, 10);

    return 0;
}
