/*************************************************************************
	> File Name: 0514字符串排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月28日 星期五 18时28分05秒
 ************************************************************************/
//将N个国家名，按字母先后顺序排列（冒泡法）
//输出
//不能使用strcmp strcpy
#include<stdio.h>
//#include<string.h>

void swap(char str1[], char str2[]);
void mstrcpy(char str1[], char str2[]);
int mstrcmp(char str1[], char str2[]);
void bubblesort(char str[][20], int n);

int main()
{
    char str[5][20] = {0}; //5个国家 

    printf("请输入5个国家名：");
    for(int i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
    }

    bubblesort(str, 5);
    

    
    putchar(10);
    //打印
    for(int i = 0; i < 5; i++)
    {
        printf("%s \n",str[i]);
    }


    return 0;
}
void swap(char str1[], char str2[])
{
    char a[20];
    mstrcpy(a, str1);
    mstrcpy(str1,str2);
    mstrcpy(str2,a);
}
void mstrcpy(char str1[], char str2[])
{
    int i = 0;
    while(str2[i] != '\0' && str1[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }

}
int mstrcmp(char str1[], char str2[])
{
    int i = 0;
    while(str1[i] && str2[i] && str1[i] == str2[i])
    {
        i++;
    }
    return str1[i] - str2[i];

}
void bubblesort(char str[][20], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n-i; j++)
        {
            if(mstrcmp(str[j-1], str[j]) > 0)
            {
                swap(str[j-1], str[j]);
            }
        }
    }
}
