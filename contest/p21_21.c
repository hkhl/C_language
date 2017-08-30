/*************************************************************************
	> File Name: p21_21.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月26日 星期三 23时12分57秒
 ************************************************************************/
//验证歌德巴赫猜想
//一个充分大的偶数
//大于等于6的
//可以分解为两个素数的和
//将6-50之间的全部偶数表示为两个素数的和
#include<stdio.h>
#include<math.h>
void primes(int num, int b[]);
int main()
{
    int i = 0;
    int b[18] = {0};
    int inx = 0;
    int iny = 1;

    primes(50, b);
    for(i = 6; i <= 50; i++)
    {
        if(i % 2 == 0)                 //是偶数
        {
            for(inx = 0; inx <= 18; inx++)      //第一个数
            {
                for(iny = inx; iny <= 18; iny++)//第二个数从第一个数后开始找
                {
                   // printf("%d ",b[3]);
                    
                    if(i == b[inx] + b[iny])
                    {
                        printf("%d = %d + %d\n", i, b[inx], b[iny]);
                        break;
                    }
                }
            }
        }
    }
    
    return 0;
}


//筛法求6-50的素数
void primes(int num, int b[])
{
    int i = 0;
    int j = 0;
    int a[num+1];
    //填充
    for(i = 2; i <= num ;i++)
    {
        a[i] = i;
    }
    //筛选
    for(i = 2; i <= sqrt(num); i++)
    {
        for(j = 2*i; j <= num; j += i)
        {  
            a[j] = 0;
            //printf("%d ", j);
        }
        //putchar(10);
    }

    j = 0;
    
    for(i = 2; i <= num; i++)
    {
        if(a[i] != 0)
        {
            b[j++] = a[i];
           //printf("%d ", a[i]);
        }          
    }
}
    
