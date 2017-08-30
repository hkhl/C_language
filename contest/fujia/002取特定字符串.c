/*************************************************************************
	> File Name: 002取特定字符串.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月20日 星期日 15时30分27秒
 ************************************************************************/
//已知一字符串 长度不大于40 其中包含两个字符“A”，
//求处于这两个字符“A”中间的字符个数，并把这些字符依次打印出来

#include<stdio.h>
#include<string.h>

int fun(const char *p)
{
    int len = 0;
    const char *bak = p;
    while(*bak++)
    {
        if (*bak != 'A')
        {
            continue;
        }
        else
        {
            const char *q = bak;
            while(*++q != 'A')
            {
                len++;
                printf("%c", *q);
            }
            return len;
        }
    }
}

int main()
{
    char str[] = "asjkAhello every boday!Adfkj";
    printf("长度: %d", fun(str));

}
