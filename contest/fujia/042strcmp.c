/*************************************************************************
	> File Name: 042strcmp.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月18日 星期一 20时28分18秒
 ************************************************************************/
//比较s1  s2字符串  相等返回0  s1大返回1  s2大返回0

#include<stdio.h>
#include<assert.h>
int mystrcmp(char *str1, char *str2)
{
    assert(str1 != NULL && str2 != NULL);

    while(*str1 && *str2 && *str1==*str2)
    {
        str1++;
        str2++;
    }
    return *str1-*str2;
}

int main()
{
    char *str1 = "aaaa";
    char *str2 = "aaaaa";

    printf("%d\n", mystrcmp(str1, str2));


    return 0;
}


