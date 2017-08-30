/*************************************************************************
	> File Name: p21_2_digui.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月09日 星期日 11时06分01秒
 ************************************************************************/
//递归实现
//求1～100奇数之和 偶数之积
#include<stdio.h>
void Sum_Mul(int n)
{
    static int sum = 0;
    static double mul = 1;

    if(n == 0)
    {   printf("100以内奇数和为：%d\n", sum);
        printf("100以内偶数积为：%e\n", mul);
    }
     if(n % 2 == 0)
    {
        mul *= n;
        Sum_Mul(n-1);
    }
    else
    {
        sum += n;
        Sum_Mul(n-1);
    }
}
int main()
{
    Sum_Mul(100);          //函数
    return 0;
}
