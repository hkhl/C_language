/*************************************************************************
	> File Name: 074八皇后.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月30日 星期六 09时43分17秒
 ************************************************************************/

//八皇后问题
/*
*在一个8×8的国际象棋棋盘上放入8个皇后且这八个皇后互不相吃
*即这8个皇后的任意两个都不在同一行、同一列及同一斜线上。
*编程序找出所有放法。
* */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int n = 8;
int c[8];
int total = 0;  //解法

int Is_Ok(int row)
{
    for(int i = 0; i < row; i++)  //保证不再一行
    {
        //不再一列 和主对角线 副对角线
        if(c[i] == c[row] || row-c[row] == i-c[i] || row+c[row] == i+c[i])
        {
            return 0;
        }
    }
    return 1;
}
void print()
{
    for(int i = 0; i < 8; i++)
    {
        printf("%d ", c[i]);
    }
    putchar(10);
    if((total+1) % 10 == 0)
    {
        getchar();
    }
}

void Queen(int row)
{
    //找到一个解决方案, 打印输出
    if(row == n)
    {
        total++;
        print();
    }
    else
    {
        for(int i = 0; i < 8; i++)
        {
            c[row] = i;
            //满足皇后条件到下一层
            //不满足条件到下一列
            //都不满足返回上一层 接着fo循环开始
            if(Is_Ok(row))
            {
                Queen(row + 1);
            }
        }
    }

}


int main()
{
    Queen(0);
    printf("共有%d种解法 \n", total);;
    return 0;
}
