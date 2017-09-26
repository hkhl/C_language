/*************************************************************************
	> File Name: 022找实数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月12日 星期二 15时58分05秒
 ************************************************************************/
//一批实数, 0作为终结标记,编程找出这批数中的最值,
//并输出最大值是这批数中的第几个数(若最大数多次出现, 只打印除第一个位置)
//打印除每个最大值数的位置,程序该如何修改?
//
#include<stdio.h>
int main()
{
    float a[100] = { 0.0 };
    
    printf("请输入实数,0结束:");

    int i = 0;
    while(1)
    {
        scanf("%f", &a[i]);
        if(a[i] == 0.0)
        {
            break;
        }
        i++;
    }
    
    float max = 0;
    float min = 0;
    int flag = 0;
    for(int j = 0; j < i; j++)
    {
        if(a[j] > max)
        {
            max = a[j];
            flag = j;
        }
        else if(a[j] < min)
        {
            min = a[j];
        }
    }

    for(int j = 0;j < i; j++)
    {
        if(max == a[j])
        {
            printf("[%d]", j);
        }
    }


    printf("max = %.2f, flag = %d \nmin = %.2f", max, flag+1, min);

    return 0;
}
