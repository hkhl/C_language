/*************************************************************************
	> File Name: 0606strlen.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 19时40分52秒
 ************************************************************************/
//实现strlen函数
#include<stdio.h>
#include<assert.h> 
/*int mstrlen(char str[])
{
    int i = 0;

    while(str[i])
    {
        i++;
    }
    return i;
}*/
unsigned int mstrlen(const char *str)
{
    assert(str != NULL);
    const char *p = str;
    while(*p++)
    ;
    return (p-str-1);
}

int main()
{
    char a[] = "asdasdzxczxawd";

    printf("%d", mstrlen(a));
    return 0;
}
