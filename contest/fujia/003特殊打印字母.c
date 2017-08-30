/*************************************************************************
	> File Name: 003特殊打印字母.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月20日 星期日 15时45分46秒
 ************************************************************************/
//将25个字母从中间的字母M开始打印 一左一右一次打印其他字母
//ABCDEFGHIGKL M NOPQRSTUVWXY
#include<stdio.h>
#include<string.h>
void print(char *p)
{
    int len = strlen(p);

    
    printf("%c ", p[len/2]);
    for(int i = len/2 - 1 ;i >=0; i--)
    {
        printf("%c ", p[i]);
        printf("%c ", p[25-1-i]);
    }
    /*  思路
    1 2 3 4 5
    3 2 4 1 5 
    len = 5
    len/2 = 2;
    a[1] a[3] 
    a[0] a[4] 
    */
}

int main()
{
    char str[] = "ABCDEFGHIGKLMNOPQRSTUVWXY";
    print(str);
    return 0;
}
