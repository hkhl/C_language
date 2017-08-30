/*************************************************************************
	> File Name: p6_2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月02日 星期日 18时13分39秒
 ************************************************************************/
//级坐标转换为直角坐标
#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    double r, du;  //分别表示半径和角度
    double x, y;

    printf("输入级坐标(r,du):");
    scanf("%lf%lf", &r ,&du);
    x = r * cos(du*PI/180);
    y = r * sin(du*PI/180);
    printf("对应直角坐标: (%lf, %lf)", x, y);
    return 0;
}
