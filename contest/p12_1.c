/*************************************************************************
	> File Name: p12_1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 22时26分04秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
//求分段函数 x大于等于0  和 x 小于等于0 时候的y值
int main()
{
    double x = 0;
    double y = 0;

    printf("请输入x：");
    scanf("%lf", &x);

    if(x >= 0)
    {
        y = (sin(x) + cos(x)) / 2;
    }
    else
    {
        y = (sin(x) - cos(x)) / 2;
    }

    printf("y = %.2lf", y);
    return 0;
}
