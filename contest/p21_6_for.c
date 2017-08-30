/*************************************************************************
	> File Name: p21_6_for.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月10日 星期一 20时28分07秒
 ************************************************************************/
//求2/1 + 3/2 + 8/5 ...求前20项的和
#include<stdio.h>
int main()
{
    //本题可用数组计算 a[0] = 0; a[1] = 1; for(i=2)->a[i] = a[i-1]+a[i-2];
    //for(i = 1)-> sum += a[i]/a[i-1];
    int i = 0;
    double a = 2.0;
    double b = 1.0;
    double c = 0;
    double d = 0;
    double sum = 0;

    /*for(i = 0; i < 20; i++)
    {
        f = a+b;
        printf("%d,", f);
        b = a;
        a = f;
    }*/
    for(i = 0; i < 20; i++)
    {
        d = a + b;
        c = a/b;
        //printf("%.5lf,", c);
        
        b = a;
        a = d;
        sum += c;
    }
    printf("%.4lf", sum);
    return 0;
}

