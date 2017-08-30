/*************************************************************************
	> File Name: p21_2_for.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月09日 星期日 10时49分50秒
 ************************************************************************/
//for循环
//求1～100奇数之和 偶数之积
#include<stdio.h>
void Sum_Mul()
{
    int sum = 0;
    double mul = 1;
    for(int i = 1; i <=100; i++)
    {
        if(i % 2 == 0)
        {
            mul *= i;
        }
        else
        {
            sum += i;
        }
    }
    printf("100以内奇数和为：%d\n", sum);
    printf("100以内偶数积为：%e\n", mul);
}
int main()
{
    int i = 0;
    Sum_Mul();          //函数
    return 0;
}
