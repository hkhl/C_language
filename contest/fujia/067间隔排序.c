/*************************************************************************
	> File Name: 067间隔排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月27日 星期三 18时36分16秒
 ************************************************************************/
/*
* 间隔元素排序。用随机函数产生25个[25,75]之间的整数 把它送到一维数组M中。
* 要求对 M[I],M[I+J],M[I+2*J],„这些元素按从小到大的顺序排序。
* J 的值由键盘输入    I 从1到J变化。实际上是以J为间隔排了J个对列每个对列中从小到大排序。 
* */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int M[25] = { 0 };
    time_t ts;
    srand((unsigned int)time(&ts));
    int j = 5;  

    for(int i = 0; i < 25; i++)
    {
        M[i] = rand()%51 + 25;
    }

    for(int i = 0; i < j; i++)
    {
        for(int k = 0; k < 25/j ; k++)
        {
            //以上两层for循环变量每个元素
            for(int x = i+k*j; x < 25; x = x+j)
            {
                if(M[i+k*j] > M[x])
                {
                    int temp = M[i+k*j];
                    M[i+k*j] = M[x];
                    M[x] = temp;
                } 
            }
        }
        putchar(10);
    }

    for(int i = 0; i < 25; i++)
    {
        printf("%d ", M[i]);
        if((i+1)%5 == 0)
        putchar(10);

    }
    return 0;
}




