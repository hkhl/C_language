/*************************************************************************
	> File Name: p21_5_for.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月10日 星期一 19时50分15秒
 ************************************************************************/
//求1-20阶乘的和
#include<stdio.h>
int main()
{
    int i = 0;
    int x = 1;
    double a = 1;
    double sum = 0;
    
    for(i = 1; i <= x; i++)
    {   
        a = a*i;
        //printf("%.2e,", a);
        sum += a;
        x++;
        if(x == 21)
        {
            break;
        }
    }
    printf("%e", sum);
    return 0;
}
