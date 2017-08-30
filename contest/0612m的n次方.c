/*************************************************************************
	> File Name: 0612m的n次方.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 20时37分49秒
 ************************************************************************/
//递归函数编写m的n次方
#include<stdio.h>
int fun(int m, int n)
{
    /*if(n == 1)
    {
        return m;
    }
    else
    {
        return m*fun(m,n-1);
    }*/

    /*static int s = 1;
    if(n == 1)
    {
        return s;
    }
    s *= m;
    fun(m,n-1);*/
}
int main()
{
    int a = 3;
    int b = 4;

    int res = fun(a,b);
    printf("%d", res);

}
