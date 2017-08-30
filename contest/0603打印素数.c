/*************************************************************************
	> File Name: 0603打印素数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 18时41分13秒
 ************************************************************************/
//打印素数出3-100的全部素数
#include<stdio.h>
#include<math.h>

void primes()
{
    for(int i = 2 ; i < 100; i++)
    {
        int flag = 1;
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
            printf("%d ", i);
        }
    }

}
int main()
{
    primes();

    return 0;
}
