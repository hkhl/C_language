/*************************************************************************
	> File Name: 012strcat.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月08日 星期五 23时17分02秒
 ************************************************************************/
//实现strcat
#include<stdio.h>
#include<string.h>


//strcat  后的字符串长度有可能超过原来的长度
char *mystrcat(char *dest, const char *src)
{
    if(dest == NULL || src == NULL)
    {
        return NULL;
    }
    char *bak = dest;
    //while(*dest++)  出错, 指针位置在\0后一位
    while(*dest)
    {
        dest++;
    }

    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return bak;

}

int main()
{
    char a[10] = "asdfghjka";
    char b[10] = "123456789";
    printf("1 : %s\n", strcat(a, b));
    char c[10] = "asdfghjka";
    char d[10] = "123456789";
    printf("2 : %s\n", mystrcat(c, d));

    return 0;
}
