/*************************************************************************
	> File Name: 0708查找字串.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月20日 星期六 15时13分48秒
 ************************************************************************/
//完成查找串s2在s1中第一次出现的位置
#include<stdio.h>

int mystrstr(char * str1, char *str2);
int mstrstr(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *p = str2;

    while(*str2++)
    {
        i++;
    }                       //i = 10;

    str2 = p;

    while(*str1)
    {
        if(k == i)
        {
            return j-i;          //如果在str1中找到的串和str2长度一致返回
        }

        if(*str1 == *str2)       //如果首字母相等比较下一个
        {
            str2++;
            k++;
        }
        else                    //不相等标记str2的计数k和首地址都初始化
        {
            str2 = p;           //str2的地址位置和计数清零
            k  = 0;
        }
        str1++;
        j++;
    }
}
int main()
{
    char a[50] = "Engli Msh, isy E11nglish is very good";
    char b[50] = "E11nglish is very";
    
    printf("\n%d", mystrstr(a, b));

    return 0;
}


int mystrstr(char * str1, char *str2)
{
    if(str1 == NULL || str2 == NULL)
    {
        return -1;
    }
    int i = 0;               //i是查找的字串的总长度， j是str1查找到的长度， k是str2查找到的长度
    int j = 0;
    int k = 0;
    
    char *p = str2;
    
    while(*str2++ != '\0')
    {
        i++;
    }
    str2 = p;
    
    while(*str1 != '\0')
    {
        if(k == i)
        {
            return j-i;
        }
        if(*str1 == *str2)
        {
            str2++;
            k++;
        }
        else
        {
            str2 = p;
            k = 0;
        }
        str1++;
        j++;
    }   
}
