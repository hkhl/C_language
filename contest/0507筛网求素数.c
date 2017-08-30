/*************************************************************************
	> File Name: 0507筛网求素数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月28日 星期五 12时46分26秒
 ************************************************************************/
//筛网法求2-100间的素数
#include<stdio.h>
#include<math.h>
void primes(int a[], int n)
{
    int i = 0;
    int j = 0;

    //填充
    for(i = 2; i < n; i++)
    {
        a[i] = i;
    }

    //筛选
    for(i = 2; i < sqrt(n); i++)
    {
        for(j = 2*i; j < n; j+=i)
        {
            a[j] = 0;
        }
    }
    //打印
    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            printf("%d ", a[i]);
        }
    }


}

int main()
{
    int a[100] = {0};
    primes(a, 100);


    return 0;
}
