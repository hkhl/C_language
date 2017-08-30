/*************************************************************************
	> File Name: 0706字符排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月20日 星期六 11时44分19秒
 ************************************************************************/
//主函数中输入10个等长的字符串，用另一个函数对他们进行排序
//然后在主函数中输出这10个已经排好顺序的字符串  小 -> 大

#define N 5
#include<stdio.h>
#include<string.h>
void swap(char a[][20], int n , int m)
{
    char temp[20];
    strcpy(temp, a[n]);
    strcpy(a[n], a[m]);
    strcpy(a[m], temp);
}

void sort(char str[][20])
{
    //选择排序
    for(int i = 0; i < N-1; i++)
    {
        int min = i;
        for(int j = i+1; j < N; j++)
        {
            if(strcmp(str[min], str[j]) > 0)
            {
                min = j;
            }
        }
        if(i != min)
        {
            swap(str, i, min);
        }
    }
}

int main()
{
    char str[N][20];
    
    for(int i = 0; i < N; i++)
    {
        scanf("%s", str[i]);
    }

    sort(str);

    putchar(10);
    for(int i = 0; i < N; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
