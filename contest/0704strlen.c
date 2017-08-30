/*************************************************************************
	> File Name: 0704strlen.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月20日 星期六 11时18分08秒
 ************************************************************************/
//求字符串的长度
#include<stdio.h>
int mstrlen(char *str)
{
    int n = 0;
    while(*str++)
    {
        n++;
    }
    return n;
}
int main()
{
    char a[20] = " ,asdsd";

    printf("%d", mstrlen(a));

    return 0;
}
