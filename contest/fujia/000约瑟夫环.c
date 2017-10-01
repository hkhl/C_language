/*************************************************************************
	> File Name: 000约瑟夫环.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月01日 星期日 11时51分10秒
 ************************************************************************/
//假设由8个人 围成一圈, 编号 1-8, 从第一个人开始 
//每隔一个人, 剔除一个人, 直到剩下最后一个人(2的倍数), 求此人的编号  
#include<stdio.h>

int live(int n, int m);
int main()
{
    int n = 8;
    int number = 2;
    int last = 0;
    
    
    /*******第一种********/
    /*for(int i = 2; i <= 8 ; i++)
    {
        last = (last+number) % i; 
    }*/


    /*******第二种*******/
    //last = live(n, number);


    /*******第三种******/
    int count = 0;
    int a[100] = {0};
    int i = 0;
    int index = 0;
    while(1)
    {
        index = index%n + 1;   //报号1到8
        if(a[index] == 0)      //有人
        {
            i = (i+1)%number;       //2的倍数
            if(i == 0)
            {
                count++;
                a[index] = 1;
            }
        }
        if(count == n)
        {
            break;
        }
    }



    //printf("最后剩下人的编号是:%d\n", last+1);
    printf("最后剩下人的编号是:%d\n", index);

    return 0;
}

int live(int n, int m)
{
    return n == 1 ? 0:(live(n-1, m)+m)%n;
}
