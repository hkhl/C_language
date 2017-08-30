/*************************************************************************
	> File Name: p21_3_digui.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月09日 星期日 11时31分25秒
 ************************************************************************/
//递归实现
//输入一行字符统计其中的英文字母，数字，空格，其他字符
#include<stdio.h>
void total()
{
    char ch;
    static int a=0, b=0, c=0 ,d=0;
    ch = getchar();
    if(ch == '\n')
    {
        printf("\n字母：%d\n数字：%d\n空格：%d\n其他：%d", a, b, c, d);
        return ;
    }
    else
    {
        if('a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z')
        {
            a++;
        }
        else if('1' <= ch && ch <= '9')
        {
            b++;
        }
        else if(ch == ' ')
        {
            c++;
        }
        else
        {
            d++;
        }
        total();
    }
}
int main()
{
    total();
    return 0;
}
