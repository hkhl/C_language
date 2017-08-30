/*************************************************************************
	> File Name: p21_18_for.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 18时10分12秒
 ************************************************************************/
//给一个整数 
//1.求出其位数
//2.分别打印出每位数字
//3.按逆序打印出各位数字
#include<stdio.h>
#include<math.h>
int main()
{

    int num = 0;
    int count = 0;
    //int res = 0;
    int temp = 0;

    printf("请输入一个整数：");
    scanf("%d", &num);
    temp = num;

    while(num)
    {
        //printf("%d ",num%10);
        //res = res*10 + num%10;
        num /= 10;
        count++;
    }
    //printf("\n该数字：%d位\n", count);
    //printf("逆序结果：%d", res);

    for(int i = count-1; i >= 0; i--)
    {
        printf("\n%d ", ((int)(temp/pow(10,i))) % 10 );
    }
    /*正向打印          //递归n=1234 余10除10 递归 打印 逆向 最先打印1
     *void printNum(int num) // 正向打印  
     {   int temp=1;  
     while(num/temp>=10) // 首先求出最高位对应的最小整数  
     {  
         temp*=10;  
     }  
     while(temp>=1)   // 然后一位一位的打印  
     {  
         printf("%d  ",num/temp%10);  
         temp/=10;  // 打印一位把最高位对应额整数除与10  
     }  
     }*/
     return 0;
     }
