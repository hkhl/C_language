/*************************************************************************
	> File Name: 0514统计单词.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月28日 星期五 18时08分44秒
 ************************************************************************/
//有一行字符 统计其中单词个数（单词之间以空格分隔）
//并将每一个字母第一个单词改为大写
#include<stdio.h>
int fun(char a[])
{
    int i = 0;
    int count = 0;

    if(a[0] != ' ')              //第一个不是空格 将其转换为大写
    {
        a[0] = a[0] -'a'+'A';
    }
    else                       //第一个是空格  while循环里 和 return count+1 将导致数目多了一次 所以减一次
    {
        count--;
    }
    
    while(a[i] != '\0')
    {
        if(a[i] == ' ')          //如果字符是空格
        {
            count++;
            a[i+1] = a[i+1] -'a'+'A';//空格下一个字符转换为大写
        }
        i++;
    }

    return count+1;

}

int main()
{
    char a[50] = "asdasd sdasd erer dfsf";

    printf("单词个数：%d", fun(a));

    printf(a);
    return 0;
}

