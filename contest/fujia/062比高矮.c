/*************************************************************************
	> File Name: 062比高矮.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月24日 星期日 13时41分18秒
 ************************************************************************/
/*
* 比高矮: 100个学生任意排成10行、10列的正方形队列在每一列中选出一个最矮的10 个, 
* 然后在这 10 个矮人中选出最高的一个人, 叫做“矮人中的高个子”。
* 而后这 10 个矮人仍站回到各自的位置,•再在每一行中选出一个最高者10个又从这10个高人中选出最矮的一人, 
* 叫做“高人中的矮个子”。
* 问“矮人中的高个子”和“高人中的矮个子”中谁的个子高 
* */


//实验结果告诉我们一个道理, 宁做凤尾 不做鸡头!
    
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    time_t ts;
    srand((unsigned int)time(&ts));

    float a[10][10] = { 0 };                //取值1.6-2.0
    float Max[10] = { 0 };
    float Min[10] = { 0 };

    for(int i = 0; i < 10; i++)
    {
        Max[i] = 0;                //取最小值
        Min[i] = 2;                //取最大值
        for(int j = 0; j < 10; j++)
        {
            a[i][j] = rand()%5/10.0+1.6;        //       (0-0.3)+1.7  得到  1.7-2.0
            if(a[i][j] >  Max[i])
            {
                Max[i] = a[i][j];
            }
            if(a[i][j] < Min[i])
            {
                Min[i] = a[i][j];
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%.2lf  ", Max[i]);
    }
    putchar(10);
    for(int i = 0; i < 10; i++)
    {
        printf("%.2lf  ", Min[i]);
    }
    putchar(10);
    putchar(10);
    putchar(10);


    float max = Min[0];
    float min = Max[0];
    for(int i = 0; i < 10; i++)
    {
        if(Max[i] < min)
        {
            min = Max[i];
        }
        if(Min[i] > max)
        {
            max = Min[i];
        }
    }


    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%.2lf  ", a[i][j]);
        }
        putchar(10);
    }
        putchar(10);
        putchar(10);
    
    printf("矮子里的高个子是%lf\n", max);
    printf("高个子里的矮子是%lf\n", min);
    if(max > min)
    {
        printf("矮子里的高个子高!!\n");
    }
    else if(max < min)
    {
        printf("高个子里的矮子更高!!\n");        //几乎都是高个子里的矮个子高
    }
    else
    {
        printf("一样高\n");
    }
    return 0;
}

