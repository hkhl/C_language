/*************************************************************************
	> File Name: 0709十转十六进制.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月15日 星期六 09时05分21秒
 ************************************************************************/
//将无符号十进制整数转换成十六进制字符表示 
//储存在字符串数组中
#include<stdio.h>

int main()
{
    char sl[20] = {0};
    int a = 0;            //储存余数
    char ch;              //余数转换成字符
    unsigned int num = 0;
    printf("please input a number:");
    scanf("%d", &num);
    
    int i = 0;
    while(num != 0)
    {
        a = num % 16;
        if(a == 10)
        {
            ch = 'A';
        }
        else if(a == 11)
        {
            ch = 'B';
        }
        else if(a == 12)
        {
            ch = 'C';
        }
        else if(a == 13)
        {
            ch = 'D';
        }
        else if(a == 14)
        {
            ch = 'E';
        }
        else if(a == 15)
        {
            ch = 'F';
        }
        else 
        {
            ch = a + '0';
        }
        sl[i++] = ch;
        num = num / 16;
    }

    puts(sl);

    return 0;
}
