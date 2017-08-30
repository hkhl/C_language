/*************************************************************************
	> File Name: 选择排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月18日 星期二 16时22分17秒
 ************************************************************************/
//选择排序
//优化
#include<stdio.h>
#include<limits.h>

void select_sort(int x[], int n);
void swap(int *a, int *b);
int main()
{
    int arr[] = {5,2,3,1,4};

    select_sort(arr, 5);

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}
void select_sort(int x[], int n)
{
    int i = 0, j = 0;
    int left = 0;
    int right = n-1;

    while(left <= right)
    {

        int min = left;
        int max = right;
        for(j = left; j <= right; j++)
        {
            if(x[j] < x[min])
            {
                min = j;
            }
            if(x[j] > x[max])
            {
                max = j;
            }
        }
        swap(&x[min], &x[left]);
        if(max == left)         //先交换的left和最小值
        {                       //当最大值在left的时候 最大值已经被交换到 min的位置了
            max = min;          //把min位置记录
        }
        swap(&x[max],&x[right]);    //交换最大值和right
        left++;
        right--;
    }
}
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
