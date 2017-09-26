/*************************************************************************
	> File Name: 036递推公式.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月17日 星期日 00时11分48秒
 ************************************************************************/
//p1 = 1;
//p2 = x
//pn = (2*y-1)*p(n-1)/y  - (y-1)*p(n-2)/y
//求该数列的前n项, 不能用数组
#include<stdio.h>
float fun(int n, float x, float y)
{
    if(n == 1)
    {
        return 1;
    }
    else if(n == 2)
    {
        return x;
    }
    else 
    {
        return (2*y-1)/y*fun(n-1, x, y) - (y-1)/y*fun(n-2, x, y);
    }

}
int main()
{
    float x = 2;
    float y = 2;
    int n = 5;  //前5项

    for(int i = 1 ; i <= n; i++)
    {
        printf("%lf \n", fun(i, x, y));
    }
    return 0;
}
