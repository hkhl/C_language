/*************************************************************************
	> File Name: p21_9_for.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月18日 星期二 18时25分23秒
 ************************************************************************/
//打印1~100间所有的素数

#include<stdio.h>
#include<math.h>
/////函数实现

/*改进： 在判断一个数是否是素数的基础上增加一个for循环每次将i的值传入*/
//if(是素数)打印
int fun()
{
    int i = 0, j = 0;
    for(i = 2; i <= 100; i++)
    {
        for(j = 2; j <= i; j++)
        {
            if(i % j == 0)
            {
                break;
            }               
            //明白素数判断跳出的终止条件是i余最后一个j都不为0 此时j++, j>=i;
        }
        if(j >= i)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    fun();
    return 0;
}






int main1()
{
    int i = 0;
    int j = 0;
    int flag = 0;
    for(i = 3; i <= 100; i++)
    {
        flag = 0;
        for(j = 2; j <= (int)sqrt(i); j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
