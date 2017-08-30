/*************************************************************************
	> File Name: p21_20.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月26日 星期三 22时17分21秒
 ************************************************************************/
//用泰勒展开式求sinx的近似值
#include<stdio.h>
#include<math.h>
int jiecheng(double n)
{
    if(n == 1)
    {
        return 1;
    }
    return n*jiecheng(n-1);
}

void go(float x, double n)
{
    double j = 0;
    double sinx = 0;
    do
    {
        j = jiecheng(2*n-1);
        sinx += pow(-1, n-1) * (pow(x, 2*n-1)/j);
        printf("%lf ", j);

        n--;
    }while(n > 0);
    printf("%.8lf\n", sinx);
}

int main()
{
    go(0.3, 8);
    go(0.5, 29);
    return 0;
}
