/*************************************************************************
	> File Name: 041逆序数字.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月18日 星期一 20时22分00秒
 ************************************************************************/
//12345   只是打印54321 只占一行
#include<stdio.h>


void fun(int n)
{
    if(n == 0)
    {
        return ;
    }
    else
    {
        printf("%d", n%10);
        fun(n/10);
    }
}
int main()
{
    int n = 12345;

    fun(n);

    return 0;
}
