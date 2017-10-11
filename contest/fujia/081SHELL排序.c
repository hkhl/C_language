/*************************************************************************
	> File Name: 081SHELL排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月11日 星期三 16时09分10秒
 ************************************************************************/
/*
*SHELL排序程序。 
该方法的特征是一个元素与它间隔为J 的元素进行比较或交换然后逐步缩小这个间隔到1为止。
J缩小的规律可以是 J<=J/2或J<=(J+1)/2我们取 J<=J/2取整编程。
具体地说方法如下对于N个数据首先让J<=INT(N/2)让X[1]与X[J+1]比较
假设数组名XX[2]与X(J+2)比较...X[N-J]与X[N]比较若次序颠倒则互相交换。
然后再重新比较一轮直到没有交换为止。
于是令J<=INT(J/2)再重复以上操作直到 J=1而且在这一轮比较中没有交换才排序完成。    

例如 N=9 数据为              5  7  6  4  9  1  3  2  8  交换次数 
J取4INT(9/2)                 5  1  3  2  8  7  6  4  9    4 
再比较一轮                               不变             0 
J取2INT(4/2)                 3  1  5  2  6  4  8  7  9    3 
再比较一轮                               不变             0 
J取1INT(2/2)                 1  3  2  5  4  6  7  8  9    4 
再比较一轮                   1  2  3  4  5  6  7  8  9    2 
再比较一轮                        不变停止 
*
* */


#include<stdio.h>
#define N 10

void shell(int a[], int len)
{
    int n = len/2;          //记录步长
    int swapnum = 0;        //记录交换次数
    for(int i = n; i > 0; i--)
    {
        while(1)
        {
            swapnum = 0;
            for(int j = i; j < N; j++)
            {
                if(a[j-i] > a[j])
                {
                    //交换
                    int temp = a[j];
                    a[j] = a[j-i];
                    a[j-i] = temp;
                    swapnum++;
                }
            }
            printf("交换次数:%d\n", swapnum);
            if(swapnum == 0)
            {
                break;
            }
        }
    }
}


int main()
{
    int a[N] = {5,7,6,4,9,1,3,2,8,0};
    int len = sizeof(a)/sizeof(int);

    shell(a,len);

    for(int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

