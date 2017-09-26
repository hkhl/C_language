/*************************************************************************
	> File Name: 020折扣.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月12日 星期二 15时37分43秒
 ************************************************************************/
//7-9月,       20票以上,优惠15%   以下优惠5%
//1-5月,10,11月  20票以上,优惠30%   以下优惠20%
//其余月不优惠
//编程序能根据月份和旅客订票数决定优惠率

#include<stdio.h>

float discount(int month, int num)
{
    if(month <= 9 && month >= 7)
    {
        if(num > 20)
        {
            return 0.15;
        }
        else
        {
            return 0.05;
        }
    }
    else if (month == 6 || month == 12)
    {
        return 0.0;
    }
    else
    {
        if(num > 20)
        {
            return 0.3;
        }
        else
        {
            return 0.2;
        }
    }
    return -1;
}

int main()
{
    int month = 0;
    int num = 0;
    float dsct = 0;  //折扣
    printf("请输入月份:");
    scanf("%d", &month);
    printf("请输入购买票数:");
    scanf("%d", &num);

    dsct = discount(month, num);

    printf("优惠%%%.2f\n", dsct*100);


    return 0;
}
