/*************************************************************************
	> File Name: 061次大值.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月24日 星期日 13时40分50秒
 ************************************************************************/
/*61.编写子函数, 求一维整型数组M[10]的最大值及次最大值次最大值可能不存在。主函
 * 数中输入10个整数, 然后调用上述子函数, 若次最大值存在, 则输出最大值及次最大值, 否则输出最大值及'NO'输出也在主程序中实现
 *
* */
#include<stdio.h>
#include<stdlib.h>

void Max(int a[], int *max, int *maxt)
{
    int maxnum = a[0];
    for(int i = 0; i < 10; i++)
    {
        if(a[i] >= maxnum)
        {
            maxnum = a[i];
        }
    }
    *max = maxnum;
    //找次大值
    maxnum = a[0];
    for(int i = 0; i < 10; i++)
    {
        if(a[i] >= maxnum && a[i] != *max)
        {
            maxnum = a[i];
        }
    }
    *maxt = maxnum;
}
int main()
{
    int M[10] = {0};
    int max = 0;  //最大值
    int maxt = 0; //次大

    Max(M,&max, &maxt);
    
    printf("最大值%d\n", max);
    if(max == maxt)
    {
        printf("No次大值\n");
    }
    else
    {
        printf("次大值%d\n", maxt);
    }

    return 0;
}

