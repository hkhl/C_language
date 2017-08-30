/*************************************************************************
	> File Name: 0605连接字符.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 19时27分43秒
 ************************************************************************/
//写一个函数将两个字符串连接起来
#include<stdio.h>
#include<string.h>

/*void mstrcat(char str1[], char str2[])
{
    int i = 0;
    int len = strlen(str1);
    while(str2[i] != '\0')
    {
        str1[len+i] = str2[i];
        i++;
    }

}*/
/*char * msrtcat(char *str1, const char *str2)
{
    int *p = str1;
    while(*p)
    {
        p++;
    }
    while(*p++ = *str2++);
    return str1;
}*/
char * mstrncat(char *str1, const char *str2, int n)
{
    int flag = 0;
    char *original = str1;
    while(*str1)
    {
        str1++;
    }
    while((n--) && (*str1++ = *str2++));
    *str1 = '\0';
    return original;
}
int main()
{
    char a[20] = "abcdsd";
    char b[20] = "efghj";

    mstrncat(a, b, 7);
    puts(a);
    return 0;
}
