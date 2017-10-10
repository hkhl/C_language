/*************************************************************************
	> File Name: 080填运算符.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月02日 星期一 17时44分57秒
 ************************************************************************/
/*
*在下式的方块中填上加号或减号使等式成立共有多少种填法? 把每种填法的式子打印出来。
*1 [] 2 [] 3 [] 4 [] 5 [] 6 [] 7 [] 8 [] 9 = 9
* 
*  穷举法
*  将8个位置每种情况的符号列举出来,符合条件的打印
* */
#include<stdio.h>
char chArr[8] = { 0 };
int a[9] = {1,2,3,4,5,6,7,8,9};

int Computer()
{
    int sum = 0;
    int j = 0;

    sum += a[j++];
    for(int i = 0; i < 8; i++)
    {
        if(chArr[i] == '+')
        {
            sum += a[j++];
        }
        else
        {
            sum -= a[j++];
        }
    }
    return sum;
}

void Print()
{
    int j = 0;
    int sum = 0;
    sum += a[j];
    printf("%d ", a[j++]);
    
    for(int i = 0; i < 8; i++)
    {
        printf("%c ", chArr[i]);
        printf("%d ", a[j++]);
    }
    printf(" = 9 \n");
}
void Fill(int n, char ch[])
{
    if(n == 8)
    {
        int res = Computer();
        if(res == 9)
        {
            Print();
        }
        return ;
    }
    else
    {
        for(int i = 0; i < 2; i++)
        {
            chArr[n] = ch[i];
            Fill(n+1, ch);
        }
    }
}

int main()
{
    int sum = 0;
    int res = 9;
    char ch[2] = {'+', '-'};

    Fill(0, ch);

    return 0;
}
