/*************************************************************************
	> File Name: 0707打印月份.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月20日 星期六 13时06分56秒
 ************************************************************************/
//打入月份号，输出该月的英文月名
//例如输入“3”，则输出“March”
#include<stdio.h>

int main()
{
    char p[12][10] = {"January", "February", "March", "April", "May", "June", 
                     "July", "August", "September", "October", "November", "December"};


    int num = 0;
    printf("请输入月份:");
    scanf("%d", &num);
    if(num <= 12 && num >= 1)
    {
        printf("对应的英文名称为：%s", *(p+num-1));
    }
    else
    {
        printf("请输入0~12之间的数");
    }
    return 0;
}
