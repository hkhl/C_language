/*************************************************************************
	> File Name: 0908排序.c
	> Author: 
	> Mail: 
    > Created Time: 2017年08月19日 星期六 21时49分43秒
 ************************************************************************/
//a1.dat 读除 "abort"  a2.dat 读出 "boy"   将两个文件a3.dat 并且排好序

#include<stdio.h>
#include<string.h>
void write(char *p)
{
    FILE *pf = fopen("/home/wang/桌面/a3.dat", "w");
    if(pf)
    {
        fputs(p, pf);
    }
}

void read(char *p, int n)
{
    FILE *pf = NULL;
    if(n == 1)
    {
        pf = fopen("/home/wang/桌面/a1.dat", "r");
    }
    else if(n == 2)
    {
        pf = fopen("/home/wang/桌面/a2.dat", "r");
    }
    else if(n == 3)
    {
        pf = fopen("/home/wang/桌面/a3.dat", "r");
    }
    else 
    {
        printf("error\n");
    }
    if(pf)
    {
        fgets(p, 10, pf);
        puts(p);
    }
}

void sort(char *p1, char *p2, char *pstr)
{
    int len = strlen(p1);
    p1[len -1] = '\0';
    strcat(pstr, p1);
    strcat(pstr, p2);

    for(int i = 0; i < strlen(pstr) - 1; i++)
    {
        for(int j = i+1; j < strlen(pstr); j++)
        {
            if(pstr[i] > pstr[j])
            {
                char ch = pstr[i];
                pstr[i] = pstr[j];
                pstr[j] = ch;
            }
        }
    }
}
int main()
{
    char str[10] = {0};
    char s1[10];
    char s2[10];

    read(s1, 1);
    read(s2, 2);

    sort(s1, s2, str);
    write(str);
    read(str, 3);

    return 0;
}
