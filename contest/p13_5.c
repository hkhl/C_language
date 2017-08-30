/*************************************************************************
	> File Name: p13_5.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 23时09分44秒
 ************************************************************************/
/*
 * 读入1到7间的某个数，输出表示一星期中相应某一天的单词：Monday，Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
 */
#include<stdio.h>
int main()
{
    int week = 0;
    printf("输入（1～7）：");
    scanf("%d", &week);

    switch(week)
    {
        case 1:printf("Monday"); break;
        case 2:printf("Tuesday"); break;
        case 3:printf("Wednesday"); break;
        case 4:printf("Thursday"); break;
        case 5:printf("Friday"); break;
        case 6:printf("Saturday"); break;
        case 7:printf("Sunday"); break;
        default: printf("error");
    }
    return 0;
}
