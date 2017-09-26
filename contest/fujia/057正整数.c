/*************************************************************************
	> File Name: 057正整数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月23日 星期六 13时03分32秒
 ************************************************************************/
//已知N是整,它可拆卸乘三个整整数N1 N2 N3之和的形式N =N1+N2+N3 
//编程打印满足上式的全部组合, 并当N1 N2 和 N3中至少两个是素数时打印"YES"否则打印"NO"
//如N=5时输出:
//5 = 1+1+3 NO
//5 = 1+2+2 YES
//5 = 1+3+1 NO
//5 = 2+1+2 YES
//5 = 2+2+1 YES
//5 = 3+1+1 YES
#include<stdio.h>

int sushu(int n)
{
    if(n == 1)
    {
        return 0;
    }
    else if(n == 2)
    {
        return 1;
    }
    else
    {
        int flag = 1;
        for(int i = 2; i < n; i++)
        {
            if( n % i == 0)
            {
                flag = 0;
            }
        }
        return flag;
    }
    return -1;
}
int main()
{
    int n = 5;
    for(int i = 1; i < n-1; i++)
    {
        for(int j = 1; j < n-1; j++)
        {
            for(int k = 1; k < n-1; k++)
            {
                if(i+j+k == n)
                {
                    printf("%d = %d+%d+%d  ",n, i, j, k);
                    if(sushu(i)+sushu(j)+sushu(k) > 1)
                    {
                        printf("YES\n");
                    }
                    else
                    {
                        printf("NO\n");
                    }
                }
                
            }
        }
    }
    return 0;
}

