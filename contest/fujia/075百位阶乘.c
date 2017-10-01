/*************************************************************************
	> File Name: 075求阶乘.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月01日 星期日 19时01分00秒
 ************************************************************************/
/*
* 求阶乘N!。 
* 设输入的N最大可使N!达到100位要求打印出全部有效数字。方法如下用数组M[100] 代表一个100位的数。
* M[1]代表最高位   M[100]代表最低位。先对M[100]置1其余各元素置零然后从1到N进行累乘。
* 同通常作乘法一样数组M与I (1≤I≤N)  相乘时 从低位数乘起乘积大于 9 时进到上一位去 然后将结果打印从头一个不等于零的位开始。 
*
* */
#include<stdio.h>
#define N 70  //70的阶乘1.197857166997 * 10^100

int main()
{
    int M[101] = {0};
    M[100] = 1;

    for(int i = 1; i <= N; i++)
    {
        for(int k = 1; k <= 100; k++)
        {
            M[k] = M[k] * i;
            for(int j = k; j > 0; j--)
            {
                if(M[j] > 9)
                {
                    M[j-1] += M[j]/10;
                    M[j] = M[j]%10;
                }
            }
        }
    }

    int i = 0;
    for(i = 1; i <= 100; i++)
    {
        if(M[i] != 0)
        {
            break;
        }
    }
    for(; i <= 100; i++)
    {
        printf("%d", M[i]);
    }

    return 0;
}
