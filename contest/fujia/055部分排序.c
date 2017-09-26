/*************************************************************************
	> File Name: 055部分排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月22日 星期五 13时17分21秒
 ************************************************************************/

//30个元素的整型数组, 编写一个对某个范围内的元素排序(从大到小)
//调用上述函数  先乘A[5]到A[20]之间的元素排序  输出
//再将A[15]到A[30]之间的元素排序  输出
#include<stdio.h>

//先ko一个插入排序
void insertsort(int a[], int m, int n)     //对下标从m->n的数排序
{
    for(int i = m+1; i < n; i++)
    {
        int j = i-1;
        int temp = a[i];
        while(j >= m && a[j] < temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;

    }
    



}


int main()
{
    int a[30] = {9,8,7,6,5,4,3,2,1,0,9,8,7,6,5,4,3,2,1,0,9,8,7,6,5,4,3,2,1,0};


    printf("未排序:\n");
    for(int i = 0; i < 30; i++)
    {
        printf("%d ", a[i]);
        if((i+1)%10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    printf("\n");

    printf("5-20间数字排序后\n");
    insertsort(a, 4, 19);
    for(int i = 0; i < 30; i++)
    {
        printf("%d ", a[i]);
        if((i+1)%10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    printf("\n");


    printf("15-30间数字排序后\n");
    insertsort(a, 14, 29);
    for(int i = 0; i < 30; i++)
    {
        printf("%d ", a[i]);
        if((i+1)%10 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}

