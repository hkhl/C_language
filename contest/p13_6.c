/*************************************************************************
	> File Name: p13_6.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 23时22分38秒
 ************************************************************************/
/*
 * 划分成绩 A B C D E
 * A 90分以上
 * B 80~89分
 * C 70~79分
 * D 60~69分
 * E 60分以下
 */
#include<stdio.h>
int main()
{
    float score = 0.0;
    printf("请输入一个成绩：");
    scanf("%f", &score);

    if(score < 60 && score >= 0)
    {
        printf("E\n");
    }
    else
    {
        switch((int)score/10)
        {
            case 10:
            case 9: printf("A\n"); break;
            case 8: printf("B\n"); break;
            case 7: printf("C\n"); break;
            case 6: printf("D\n"); break;
            default: printf("E\n");break;
        }
    }
    return 0;
}
