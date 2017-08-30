/*************************************************************************
	> File Name: p21_22.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月27日 星期四 15时58分33秒
 ************************************************************************/
//牛顿迭代法求方程在1.5附近的根（精确度为10^-5）
//
//方程：2x^(3) - 4x^(2) + 3x - 6 = 0
#include<stdio.h>
#include<math.h>
int main()
{
    double f, f1;
    double x0 = 1000;
    double x = 0;
    int count = 0;

    do
    {
        count++;
        x = x0;
        f = ((2 * x - 4) * x + 3) * x - 6;
        f1 = (6 * x - 8) * x + 3;     //对f求导
        x0 = x - f/f1;                // 新值 等于 旧值减去 （f/f'）
        

    }while(fabs(x0 - x) > 1e-5);

    printf("%lf,%d", x0, count);

    return 0;
}
