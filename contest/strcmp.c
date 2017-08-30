/*************************************************************************
	> File Name: 0608strcmp.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月06日 星期六 09时50分16秒
 ************************************************************************/

#include<stdio.h>
int mstrcmp(const char *str1, const char *str2)
{
    //assert
    while(*str1 && *str2 && *str1 == *str2)
    {
        ++str1;
        ++str2;
    }
    return (*str1 - *str2);
}
int main()
{
    char a[] = "abc";
    char b[] = "abcbe";

    printf("%d", mstrcmp(a, b));
    
    return 0;
}
