/*************************************************************************
	> File Name: p21_6_digui.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月10日 星期一 21时02分53秒
 ************************************************************************/
//求2/1 + 3/2 + 8/5 ...求前20项的和
//递归
#include<stdio.h>
double Fi(int n)
{
    if(n == 1 || n == 2)
    {
        return n;
    }
    else 
    {
        return Fi(n-1)+Fi(n-2);
    }
}
int main()
{
    double a = 0;
    for(int i = 1; i <= 20; i++)
    {
        a += Fi(i+1)/Fi(i);    
    }
    printf("%.2lf", a);
    /*for(int i = 0; i < 20; i++)
    {

    }*/
}
