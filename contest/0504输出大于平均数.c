/*************************************************************************
	> File Name: 0504输出大于平均数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月27日 星期四 21时24分05秒
 ************************************************************************/
//输入N个数到数组中
//输出大于这N个数平均值的数
#include<stdio.h>
int main()
{
    int a[] = {1,3,5,5,6,8,9,6,4,3,4,6};
    int len = sizeof(a)/sizeof(int);
    int sum = 0;
    float ave = 0;

    for(int i = 0; i < len; i++)
    {
        sum += a[i];
    }
    ave = sum / len;
    printf("平均数是：%2.f\n", ave);
    printf("大于平均值的数是：");
    for(int i = 0; i < len; i++) 
    {
        if(a[i] > ave)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
