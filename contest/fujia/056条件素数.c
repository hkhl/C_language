/*************************************************************************
	> File Name: 056条件素数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月23日 星期六 12时39分35秒
 ************************************************************************/
 //编程求出3到39之间满足下列条件的各组素数: 每组有3个素数 ,第2个比第一个大2  第3个比大二个大4  
 //例如 5,7,11就满足条件的一组
 //1) 不许使用数组
 //2_打印满足条件的各组素数
 //3)求出满足条件的素数共有多少组
#include<stdio.h>

int findsushu(int n)
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
    int num = 0; //记录满足条件的素数组的个数
    for(int i = 3; i <= 39; i++)
    {
        if(findsushu(i))  //如果是素数
        {
            if(findsushu(i+2))  //第二个是素数
            {
                if(findsushu(i+2+4))
                {
                    num++;
                    printf("%d   %d   %d\n", i, i+2, i+2+4);
                }
            }
        }
    }

    return 0;
}
