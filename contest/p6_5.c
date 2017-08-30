/*************************************************************************
	> File Name: p6_5.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月02日 星期日 19时18分27秒
 ************************************************************************/
// 例如123 为 1+2+3=6
#include<stdio.h>
#include<math.h>
#define n 3 
int main1()
{
    int x = 0;
    int num = 0;
    int i = 0;
    printf("请输入一个%d位整数：", n);
    scanf("%d", &x);

    int a = 0;
    for(i = 0; i < n; i++)
    {
        a = pow(10, i);
        num += x/a%10; 
    }
    printf("%d",num);
    return 0;
}

//改进
int main()
{
    int num = 0;
    int sum = 0;

    scanf("%d", &num);

    while(num)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("%d", sum);

    return 0;
}
