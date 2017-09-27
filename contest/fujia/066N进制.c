/*************************************************************************
	> File Name: 066N进制.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月27日 星期三 18时04分29秒
 ************************************************************************/
/*
 * 编写将一个十进制数M转化成N进制数2≤N≤16的程序。
 * 提示转化成N进制数的各位数可以分别放在数组的各个元素中。 
 * 注意进制N超过10时, 用A表示10  B表示11...  F表示15。 
 *
* */
#include<stdio.h>

int ntox(int num, int N, char a[])
{
    int i = 0;
    int len = 0;
    int numbak = num;
    while(num)
    {
        num /= N;
        i++;
    }
    len = i;

    num = numbak;

    i--;
    while(num)
    {
        if(num % N < 10)
        {
            a[i--] = num%N + '0';
        }
        else      
        {
            a[i--] = num%N + '0' - '9' - 1  + 'A';
        }
        num /= N;
    }
    return len;

}

int main()
{

    int M = 11110;    //转换的数
    //100000
    //10000
    int N = 11;     //N进制
    char a[50] = { 0 };
    int len = 0;
    if(N >16 || N < 2)
    {
        printf("错误\n");
    }
    
    len = ntox(M, N, a);

    for(int i = 0; i < len; i++)
    {
        printf("%c ", a[i]);

    }

    return 0;
}

