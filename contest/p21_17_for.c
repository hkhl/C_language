/*************************************************************************
	> File Name: p21_17_for.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 17时57分21秒
 ************************************************************************/
//a逆序得b
//若4*b = a
//输出a
#include<stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i = 1000; i <= 9999; i++)
    {
        j = i;
        temp = 0;
        while(j != 0)
        {
            temp = j%10 + temp*10;
            j = j/10;
        }
        //printf("%d ",temp);
        if(temp*4 == i)
        {
            printf("%d", i);
        }
    }
    return 0;
}
