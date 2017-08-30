/*************************************************************************
	> File Name: p21_11.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月18日 星期二 23时07分15秒
 ************************************************************************/
//求两个整数的最大公约数和最小公倍数
#include<stdio.h>
int main()
{
    int m = 0, n = 0;
    int temp = 0;
    scanf("%d%d", &m, &n);
    int sum = m*n;
    while(m%n != 0)
    {
        temp = m%n;
        m = n;
        n = temp;
    }
    printf("\n最大公约数：%d", n);
    printf("\n最小公倍数：%d", sum / n);
    

    return 0;
}
