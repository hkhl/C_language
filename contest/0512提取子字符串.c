/*************************************************************************
	> File Name: 0512提取子字符串.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月28日 星期五 17时35分13秒
 ************************************************************************/
//将一个字符串的前N的字符拷贝到一个字符型数组中 再加上一个'\0'
//不能使用strcpy函数


#define N 3         //拷贝3个字符
#include<stdio.h>
void mystrcpy(char str[], char a[], int n)
{
    int i = 0;
    while(str[i] != '\0' && i < n)
    {
        a[i] = str[i];
        i++;
    }
}

int main()
{
    char str[] = "GOOD GOOD STUDY";
    char a[N+1] = "\0";//存取3个字符的数组

    mystrcpy(str, a, N);

    printf("%s", a);
    return 0;
}
