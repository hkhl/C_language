/*************************************************************************
	> File Name: p21_14.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月22日 星期六 21时01分43秒
 ************************************************************************/
//3025 = (30+25) * (30+25)
//求类似的全部4位数
#include<stdio.h>
#include<math.h>
int main()
{
    int i = 0;
    int num = 0;

    for(i = 1000; i <= 9999; i++)
    {
        if(pow(i%100 + i/100, 2) == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
