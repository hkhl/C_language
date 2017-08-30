/*************************************************************************
	> File Name: p21_8.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月18日 星期二 17时28分05秒
 ************************************************************************/
//判断一个数是否是素数
#include<stdio.h>
#include<math.h>
int main()
{
    int i = 0;    
    int num = 0;
    printf("请输入一个数字：");
    scanf("%d", &num);
    
    int snum = (int)sqrt(num);
   
    if(num < 2)
    {
        printf("No");
    }
    else
    {
        for(i = 2; i <= snum; i++)
        {
            if(num % i == 0)
            {
                printf("NO");
                break;
            }
        }
        if(i > snum)        //程序跳出for循环还不是素数一定大于snum
        {
            printf("Yes");

        }
    }

    return 0;
}
