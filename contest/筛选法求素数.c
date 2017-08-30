/*************************************************************************
	> File Name: 筛选法求素数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 16时29分08秒
 ************************************************************************/
//筛网法
//思路：把2-100数放到数组中，找到最小的非0数a[i]
//它就是素数i
//将等于2i，3i……ni的数全部置0重复以上步骤
// 直到i大于100为止
#include<stdio.h>
#include<math.h>
#define N 101
void primes(int a[N]);
void output(int a[N]);
int main()
{
    int a[N] = {0};

    primes(a);
    output(a);

    return 0;
}
void primes(int a[N])
{
    for(int i = 2; i < N; i++)
    {
        a[i] = i;
    }
    //筛选求素数
    for(int i = 2; i < sqrt(N); i++)
    {
        for(int j = 2*i; j < N; j=j+i)
        {
           // printf("%d ",j);
            a[j] = 0;
        }
        //putchar(10);
    }
}
void output(int a[N])
{
    int n = 0;
    for(int i  = 2; i < N; i++)
    {
        if(a[i] != 0)
        {
            printf("%d ", a[i]);
            
            if((++n)%5 == 0)
            {
                putchar(10);
            }
        }
    }
}
