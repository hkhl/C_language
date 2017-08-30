/*************************************************************************
	> File Name: 0501挑选素数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月27日 星期四 19时41分38秒
 ************************************************************************/
/*
 *给一个正整数组，N个元素 
 *求出其中素数之和 及 所有 素数的平均数
 */
#include<stdio.h>
#include<math.h>
int prime(int arr[], int n)  //求100以内的素数
{
    int flag = 1;
    int k = 0;

    for(int i = 2; i <= 100; i++)
    {
        flag = 1;                    //重置flag
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            arr[k] = i;
            k++;
        }
    }
    return k;
}
int main()
{
    int arr[100];
    const int N = 100;
    int len = prime(arr, N);
    int sum = 0;
    int ave = 0;

    for(int i = 0; i < len; i++)
    {
        //printf("%d ", arr[i]);
        sum += arr[i];
    }
    ave = sum / len;

    printf("sum = %d, ave = %d", sum, ave);
    
    return 0;
}
