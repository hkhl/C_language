/*************************************************************************
	> File Name: p21_6.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月10日 星期一 21时40分00秒
 ************************************************************************/
//10个数求最大最小值
#include<stdio.h>
int main()
{
    int a[10] = {0};
    int b = sizeof(a)/sizeof(int);

    int max = 0;
    int min = 0;
    
    for(int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < b; i++)
    {
        if(a[i] > a[max])
        {
            max = i;
        }
        else if(a[i] < a[min])//用else if  因为一个数不可能既是最大又是最小数
        {
            min = i;
        }
    }
    printf("max = %d, min = %d", a[max], a[min]);

    return 0;
}
