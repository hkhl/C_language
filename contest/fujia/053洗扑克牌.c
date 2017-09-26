/*************************************************************************
	> File Name: 053洗扑克牌.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月22日 星期五 12时50分12秒
 ************************************************************************/
//洗扑克牌, 将54张牌分别编号为1,2,,54号  放在数组M中
//洗牌方法如下: 产生[1,54]区间内的一个随机数K, 将M[1]与M[K]交换;
//然后产生[2,54]之间的随机整数K, 让M[2] 与 M[K]交换;
//直到剩下最后一张牌为止,,请编写实现洗牌的程序

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void swap(int a[], int m, int n)
{
    int temp;
    temp = a[m];
    a[m] = a[n];
    a[n] = temp;
}

int main()
{
    int M[54];
    for(int i = 0; i < 54; i++)
    {
        M[i] = i+1;
    }

    srand((unsigned int)time(NULL));
    int randnum = 0;
    int i = 1;
    while(1)
    {
        randnum = rand()%52+2;  //2-54
        swap(M, i++, randnum);
        if(i == 54)
        {
            break;
        }
    }

    for(int i = 0; i < 54; i++)
    {
        printf("%d ", M[i]);
    }

    return 0;
}

