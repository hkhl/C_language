/*************************************************************************
	> File Name: p21_3_while.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月09日 星期日 11时29分08秒
 ************************************************************************/
//while
//输入一行字符统计其中的英文字母，数字，空格，其他字符
#include<stdio.h>
void total()
{
    char ch;
    int a, b, c ,d;
    a = b = c = d = 0;
    while((ch = getchar()) != '\n')
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
    }
    printf("\n字母：%d\n数字：%d\n空格：%d\n其他：%d", a, b, c, d);
}

int main()
{
    total();
    return 0;
}
