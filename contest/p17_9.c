/*************************************************************************
	> File Name: p17_9.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月05日 星期三 13时05分24秒
 ************************************************************************/
//打印一个平行四边行
#include<stdio.h>
int main()
{
    int i, j, k;
    char space = '-';
    char a = '*'; 
    for(i = 0; i<= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", space);
        }
        for(k = 0; k <= 5; k++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}
