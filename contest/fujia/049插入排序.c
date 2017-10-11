/*************************************************************************
	> File Name: 049插入排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月21日 星期四 16时15分10秒
 ************************************************************************/
//设手中原来有3张牌已经排好顺序 抓1张新牌 若这张排的次序在原来第2张牌之后,第3张之前,
//那么把这张排放在第3张牌的位置上, 原来的第3张改为第4张, 再抓新牌
//注:开始没有牌,从第一张牌抓起
#include<stdio.h>
#define N 10
//小到大排序

void insertsort(int a[])
{
    for(int i = 1; i < N; i++)
    {
        int j = i-1;
        int temp = a[i];
        while(j >= 0 && a[j] > temp) 
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
//简化代码
void insertsort1(int a[])
{
    int i, j;
    for(i = 1; i < N; i++)
        if(a[i] < a[i-1])
        {
            int temp = a[i];
            for(j = i-1; j >= 0 && a[j] > temp; j--) 
                a[j+1] = a[j];
            a[j+1] = temp;
        }
}

int main()
{
    int a[N] = {9,4,2,6,7,8,1,3,0,5};

    insertsort(a);

    for(int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}



void Swap(int a, int b);
void Insertsort3(int a[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    for (j = i - 1; j >= 0 && a[j] > a[j + 1]; j--)
        Swap(a[j], a[j + 1]);

}

