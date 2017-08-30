/*************************************************************************
	> File Name: 0601判断素数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 18时24分08秒
 ************************************************************************/
//判断某个数是否是素数
#include<stdio.h>
#include<math.h>

int JudgePrime(int num)
{
    int flag = 0;
    int i = 0;
    if(num == 1)
    {
        return 0;
    }
    for(i = 2; i < sqrt(num); i++)
    {
        if(i != 1 && num % i == 0)
        {
            return 0;
        }
    }
    if(i > sqrt(num))
    {
        return 1;
    }
}
int main()
{
    int num = 0;
    printf("请输入一个数：");
    scanf("%d", &num);
    
    if(JudgePrime(num))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
