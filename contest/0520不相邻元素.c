/*************************************************************************
	> File Name: 0520不相邻元素.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月30日 星期日 15时35分40秒
 ************************************************************************/
//找出M*N数组中所有不相邻的元素
//并求出他们的和                   //找除所有相邻求和 总值减去相邻和
//相邻的数：前一个是偶数 后一个是素数

//找到素数将其置为0 如果其前一个数为偶数 也置为0

#include<stdio.h>
#include<math.h>
int Sum(int b[])
{
    int sum = 0;
    for(int i = 0; i < 30; i++)
    {
        if(b[i] != 0)
        {
            sum += b[i];
        }
    }
    return sum;
}
void Find(int b[])     //找素数前一个位置 是偶数置0
{
    for(int i = 0; i < 30; i++)
    {
        if(b[i] == 0)  //该位置是素数
        {
            if(i == 0)
            {
                continue;
            }
            else
            {
                if(b[i-1] % 2 == 0)
                {
                    b[i-1] = 0;
                }
            }
        }
    }

}
void trans(int a[][10], int b[]) 
{
    //将二位数组转换为一维数组
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            b[10*i+j] = a[i][j];
        }
    }

}
void judege(int a[][10], int b[], int row)
{
    int i = 0;
    int j = 0;
    int k = 0;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < 10; j++)
        {
            for(k = 2; k <= sqrt(a[i][j]); k++) //判断二维数组中的素数
            {
                if(a[i][j] % k == 0)
                {
                    break;
                }             //不是素数不管
            }          
            
            if(a[i][j]!= 1 && k > sqrt(a[i][j]))
            {
                a[i][j] = 0;
            }
        }
    }
}

int main()
{
    int a[3][10] = {{1,2,3,4,5,6,7,8,9,10},
                   {11,12,13,14,15,16,17,18,19,20},
                   {21,22,23,24,25,26,27,28,29,30}};
    int b[30] = {0};
    
    judege(a, b, 3);                                       //按顺序一步步来 
    trans(a, b);
    Find(b);
    printf("不相邻元素的和：%d", Sum(b));

    return 0;
}
