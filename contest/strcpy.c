/*************************************************************************
	> File Name: 0607strcpy.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 19时45分36秒
 ************************************************************************/
//实现strcpy函数
#include<stdio.h>
#include<string.h>
char *mstrcpy(char *des, char *source)
{
    char *last = NULL;
    if(des == NULL || source == NULL)
    {
        return last;
    }
    last = des;       //存放字符串的首地址
    while((*des++ = *source++) != '\0');
    return last;
}
int main()
{
    char a[] = "asdasdasdasd";
    char b[] = "aqweqweqweqweqweqweqwe";

    printf("%s\n", mstrcpy(a, b));
    return 0;
}
