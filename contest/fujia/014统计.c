/*************************************************************************
	> File Name: 014统计.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月09日 星期六 09时41分53秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
void fun(char *str, int *n, int *c, int *o)
{
    while(*str)                          // 注意优先级
    {
        if(islower(*str))
        {
            (*c)++;                      //注意带括号
        }
        else if (isdigit(*str))
        {
            (*n)++;
        }
        else
        {
            if(!isspace(*str))
            {
                (*o)++;
            }
        }
        str++;
    }

}
int main()
{
    char str[20];
    //gets(str);
    fgets(str, sizeof(str), stdin); 
    int num = 0;     
    int ch = 0;
    int other = 0;

    fun(str, &num, &ch, &other);

    printf("数字%d\n字母%d\n其他%d\n",num, ch, other);
    return 0;
}
