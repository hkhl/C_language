/*************************************************************************
	> File Name: 084完全平方数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月30日 星期一 21时16分32秒
 ************************************************************************/
/*
十个数字组成完全平方数。 
把0、1、2、3、4、5、6、7、8、9十个数字分别组成
一个一位数一个二位数一个三位数和一个四位数
使它们都是完全平方数其平方根是整数共有几种方法? 
每种方法的结果是什么? 每个数字只允许用一次。
下边就是一种填法
1    (1)            
36   (6)   
784  (28)
9025 (95)
*/

/*      解题思路    */

// 1位:  1~3
// 2位:  4~9
// 3位:  10~31    32^2 =1024
// 4位:  32~99    100^2 = 10000
//100平方是5位数, 最大是99(9801)
// 最简单的思路就是暴力破解法, 将1-99的全部结果存在4个数组中,
// 每个数组依次取一个值, 全部取完为止, 所有结果出来

/*   回溯法    */
//分别遍历1,2,3,4位的情况
//满足条件向下遍历 

#include <stdio.h>
#include <math.h>
#include <unistd.h>


int NumLen(int num);
int IsFull(int a[]);
int IsOk(int a[], int num);
void Reset(int a[], int num);
void Find(int a[], int n);
int M[4];  //存放求平方后的数据
int main()
{
    int a[10];
    for(int i = 0; i < 10; i++)
        a[i] = -1;

    Find(a, 1);

    return 0;
}

int NumLen(int num)
{
    int len = 0;

    while(num)
    {
        num /= 10;
        len++;
    }
    return len;
}

int IsFull(int a[])
{
    for(int i = 0; i < 10; i++)
    {
        if(a[i] == -1)
        {
            return 0;
        }
    }
    return 1;
}


int IsOk(int a[], int num)
{
    int number = num;
    int wei[4] = {0};
    int len = NumLen(num);
    int flag = 1;

    for(int i = 0; i < len; i++)
    {
        wei[i] =  number%10;
        number /= 10;
    }
    number = num;

    /* 判断自身是否由相等的数字 */
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(i == j)
                continue;
            if(wei[i] == wei[j])
            {
                return 0;
            }
        }
    }

    for(int i = 0; i < len; i++)
    {
        if(wei[i] == a[wei[i]])
        {
            return 0;
        }
    }
    for(int i = 0; i < len; i++)
    {
        a[wei[i]] = wei[i];
    }
    return 1;
}

void Reset(int a[], int num)
{
    int number = num;
    int wei[4] = {0};
    int len = NumLen(num);

    for(int i = 0; i < len; i++)
    {
        wei[i] =  number%10;
        number /= 10;
    }

    for(int i = 0; i < len; i++)
    {
        a[wei[i]] = -1;
    }
}


void Find(int a[], int n)
{
    int i ,j , m, k;
    i = j = m = k = 0;
    if(IsFull(a))  //数组全满  0-9分布满
    {
    }
    switch(n)
    {
        case 1:
        {
            for(i = 0; i <= 3; i++)
            {
                if(IsOk(a, pow(i, 2)))
                {
                    M[0] = pow(i, 2); 
                    Find(a, 2);
                    Reset(a, pow(i, 2));
                }
                {
                    for(int i = 0; i < 10; i++)
                        a[i] = -1;
                }
            }
            break;
        }
        case 2:
        {
            for(j = 4; j <= 9; j++)
            {
                if(IsOk(a, pow(j, 2)))
                {
                    M[1] = pow(j, 2); 
                    Find(a, 3);
                    Reset(a, pow(j, 2));
                }
            }
            break;
        }
        case 3:
        {
            for(m = 10; m <= 31; m++)
            {
                if(IsOk(a, pow(m, 2)))
                {
                    M[2] = pow(m, 2); 
                    Find(a, 4);
                    Reset(a, pow(m, 2));
                }
            }
            break;
        }
        case 4:
        {
            for(k = 32; k <= 99; k++)
            {
                if(IsOk(a, pow(k, 2)))
                {
                    M[3] = pow(k, 2); 
                    
                    for(int i = 0; i < 4; i++)
                    {
                        printf("%d ", M[i]);
                    }
                    printf("\n");
                    Reset(a, pow(k, 2));
                    //sleep(1);
                    break;
                }
            }
            break;
        }
        default: printf("error\n"); 
                break;
    }
}
