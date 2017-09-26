/*************************************************************************
	> File Name: 032平方和.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月15日 星期五 17时08分51秒
 ************************************************************************/
//将一个整整数写成其他两个正整数的平方和
//不能输出NO
#include<stdio.h>


int main()
{
    int n = 2225;
    int flag = 0;
    for(int i = 1; i <= n/2; i++)
    {
        for(int j = i+1; j <= n/2; j++)
        {
            if(i*i+j*j == n)
            {
                flag = 1;
                printf("%d  %d\n", i, j);
            }
        }
    }
    if(flag == 0)
    {
        printf("no\n");
    }

    return 0;
}

