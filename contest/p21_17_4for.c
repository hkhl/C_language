/*************************************************************************
	> File Name: p21_17_for.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 17时47分37秒
 ************************************************************************/
//一个四位数a 将其逆序得到b
//如果4*b = a
//找到这么一个数
//四重for循环暴力穷举法
#include<stdio.h>
int main()
{
    int a, b, c, d;
    a = b = c = d = 0;


    for(a = 1; a <= 9; a++)
    {
        for(b = 0; b <= 9; b++)
        {
            for(c = 0; c <= 9; c++)
            {
                for(d = 1; d <= 9; d++)
                {
                    if((a*1000+b*100+c*10+d)  == 4*(d*1000+c*100+b*10+a))
                    {
                        printf("%d ",a*1000+b*100+c*10+d);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
