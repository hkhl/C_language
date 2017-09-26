/*************************************************************************
	> File Name: 038验证素数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月17日 星期日 13时04分41秒
 ************************************************************************/
//假设a-1和a+1是大于10的素数, 验证a^3-4a 可被120整除.
//编程序输入a的值, 判a-1和a+1是否为素数
//不是输出"no" 都是素数 验证素数 a^3-4a 是否能被120整除
#include<stdio.h>
#include<math.h>

int sushu(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else if(num == 2)
    {
        return 0;
    }
    int flag = 1;
    for(int i = 2; i < num; i++)
    {
        if(num%i == 0) 
        {
            flag = 0; 
            return 0;
        }
    }
    if(flag == 1)
    {
        return 1;
    }
}
int main()
{
    int a = 240;
    if(sushu(a-1) && sushu(a+1))
    {
        if((int)(pow(a,3)-4*a)%120 == 0)
        {
            printf("OK\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NOT PRIME!\n");
    }

    return 0;
}
