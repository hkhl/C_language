/*************************************************************************
	> File Name: 打印水仙花数_for.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月22日 星期六 20时25分55秒
 ************************************************************************/
#include<stdio.h>
#include<math.h>
//三重for循环打印水仙花数
int main()
{
    int a, b, c;
    int num;
    num = a = b = c = 0;
    
    for(a = 1; a <=9 ; a++)
    {
        for(b = 0; b <= 9; b++)
        {
            for(c = 0; c <= 9; c++)
            {
                if(pow(a,3) + pow(b,3) + pow(c,3) == 100*a + 10*b + c)
                {
                    printf("%d ", 100*a + 10*b + c);
                }
            }
        }
    }

    return 0;
}






//一次for循环打印所有水仙花数
//用函数实现
/*伪代码
 * fun(int n)
 * return n == pow(...)+pow(...)+pow(...);
 * 
 * for(i)
 * if(fun(i))
 * {
 *      printf();
 * }
 * */
int main1()
{
    int num = 0;
    int res = 0;

    for(num = 100; num <= 999; num++)
    {
        res = pow(num%10, 3) + pow(num/10%10, 3) + pow(num/100%10, 3);
        if(num  == res)
        {
            printf("%d ", num);
        }
        else
        {
            continue;
        }
    }

    return 0;
}
