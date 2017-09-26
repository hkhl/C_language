/*************************************************************************
	> File Name: 023变形.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月12日 星期二 16时18分42秒
 ************************************************************************/
//10个两位数的整数
//如果是素数, 乘以2
//如果是偶数, 除以2
//其他数字, 减1
//变形后的数字从小到大排序输出
#include<stdio.h>

void sort(int a[])
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void print(int a[])
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int sushu(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else if(num == 2)
    {
        return 0;
    }
    int flag = 1;
    for(int i = 2; i < num; i++)
    {
        if(num%i == 0) 
        {
            flag = 0; 
            return 0;
        }
    }
    if(flag == 1)
    {
        return 1;
    }
}
int main()
{
    int a[10] = {1, 4, 5, 7, 9, 23, 54, 22,16, 17};

    for(int i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)
        {
            a[i] /= 2;
        }
        else if (sushu(a[i]))
        {
            a[i] *= 2;
        }
        else
        {
            a[i] -= 1;
        }
    }

    sort(a);
    print(a);
    return 0;
}

