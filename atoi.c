/*************************************************************************
	> File Name: atoi.c
	> Author: wang
	> Mail: dhkhl235@gmail.com
	> Created Time: 2018年04月18日 星期三 15时23分30秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int myatoi(const char* str)
{
    if(str == NULL)
        return 0;

    int i = 0;
    int num = 0;
    char symbol = '0'; 
    while(str[i] == ' ')
    {
        i++;
    }

    if(str[i] == '-')
    {
        symbol = str[i];
        i++;
    }

    num = 0;
    while(str[i] != '\0')
    {
        if(str[i] <= '0' || str[i] >= '9')
            return 0;
        num *= 10;
        num += str[i] - 48;
        i++;
    }
    return symbol == '-' ? -num:num;
}


void main()
{
    const char *str = "  -12345";

    int num = myatoi(str);

    printf("%d", num);

    
}
