/*************************************************************************
	> File Name: p21_2_while.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月09日 星期日 11时00分22秒
 ************************************************************************/
//while循环
//求1～100奇数之和 偶数之积
#include<stdio.h>
void Sum_Mul()
{
    int i = 1;
    int sum = 0;
    double mul = 1;
    while(i <= 100)
    {
        if(i % 2 == 0)
        {
            mul *= i;
        }
        else
        {
            sum += i;
        }
        i++;
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
