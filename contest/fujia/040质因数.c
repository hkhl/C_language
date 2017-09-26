/*************************************************************************
	> File Name: 040质因数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月18日 星期一 00时05分54秒
 ************************************************************************/
//分解质因数
#include<stdio.h>

int main()
{ 
    int n = 19; // 2- 12   2- 6  2- 3- 
    int flag = 0;
    while(1)
    {   
        for(int i = 2; i <= n-1; i++)    //从1除到自身的大小,
        {
            if(n%i == 0)        
            {
                n = n/i;
                flag = 1;
                printf("%d\n", i);
                break;
            }
            flag = 0;
        }

        if(flag == 0)
        {
            break;
        }
    }
    if(flag == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("%d", n);
    }

    return 0;
}
