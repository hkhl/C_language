/*************************************************************************
	> File Name: 078打印日历.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月02日 星期一 15时06分10秒
 ************************************************************************/
 /*
 *要求每行打印两个月日历。如下图 
      一月               二月 
       
      三月               四月         
      
       .                 . 
       .                 . 
      
      十一月             十二月        
       .                 . 
       
      思考: 每行打印三个月日历。
 *
 * */

#include<stdio.h>
//2017年1月第1天星期天

int main(void)  
{  
    int a, i, j, n, k, t, w, x, z;  
    static int DM[12][60];  
    int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };  
    char wst[] = " Sun Mon Yue Wed Thu Fri Sat   ";  


    w = 2; //第一天星期二
    for(i=0; i<12; i++)  
    {  
        a = 1;  
        for(j=0; j<6; j++)  
        {  
            for(k=0; k<=6; k++)  
            {  
                while(k<w) k=k+1;  
                DM[i][j*10+k] = a;  /*计算i月的第j个星期的星期w的日期为a*/  
                a=a+1;  
                w = k+1;  
                if(w==7) w=0;  
                if(a>m[i]) break;  
            }  
            if(a>m[i]) break;  
        }  
    }  
    printf("input x(2,3): ");  
    scanf("%d", &x);  //x  为每行显示个数


    for(n=0; n<12/x; n++)  
    {  
        t = x*(n)+1;  
        printf("\n    ");  
        for(z=1; z<=x; z++)  
        {  
            for(k=1; k<=15; k++)  
            printf(" ");  
            printf("%2d", t+z-1);   /*打印月号*/  
            for(k=0; k<14; k++)  
            printf(" ");  
        }  
        printf("\n      ");  
        for(z=0; z<x; z++)      /*横排x个月*/  
        printf("%s", wst);   /*星期标题*/  
        for(j=0; j<6; j++)  
        {  
            printf("\n  ");  
            for(i=t-1; i<t+x-1; i++)  
            {  
                printf("   ");  
                for(k=0; k<=6; k++)  
                if(DM[i][j*10+k]==0) /*打印空格*/  
                printf("    ");  
                else  
                printf("%4d", DM[i][j*10+k]);/*日期*/  
            }  
        }  
    }  
    return 0; 
}

int main1()
{
    int i, j, k;
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char week[40] = {"Sun  Mon  Tue  Wed  Thu  Fri  Sat"};
    int day[12] = {0}; //计算每月1号是星期几
    int weekday = 0; //控制一周7天 0-6 表示周天周一到周6

    day[0] = 0;        //2017年1月1号是星期天


    for(int i = 0; i < 12; i++)
    {
        for(int j = 1; j <= month[i]; j++)
        {
            if(j == 1)
            {
                day[i] = weekday;
            }
            weekday++;
            if(weekday == 7)
            {
                weekday = 0;
            }
        }
    }

    //一排显示一个月份
    /*for(i = 0; i < 12; i++)
    {
        printf("               %d\n", i+1);
        printf("%s\n", week);
       
        for(k = 1; k <= day[i]; k++)   //是一个月的第几天 就空几个空格
        {
            printf("     ");
        }
        
        for(j = 1; j <= month[i]; j++)
        {
            printf("%3d  ", j);
            if((j+k-1)%7 == 0)
            {
                printf("\n");
            }
        }
        printf("\n");
        printf("\n");
    }*/

    int n = 0;
    int x = 2;    //每排打印几个
    for(n = 0; n < 12/x; n++)  //6次
    {
        //循环12/2=6次
        int mon = n*x+1;   //月份
        printf("\n");
        
        for(int i = 0; i < 15; i++)
        printf(" ");
        for(int i = 0; i < x; i++)
        {
            printf("%2d", mon+i);
            for(int i = 0; i < 46; i++)
            printf(" ");
        }
        printf("\n");
    
        //打印星期
        for(int i = 0; i < x; i++)
        {
            printf("%s", week);
            for(int i = 0; i < 15; i++)
            printf(" ");
        }
        printf("\n");


        //打印日期
        for(int i = 0; i < x; i++)
        {
            //未完成
        }
    }
    return 0;
}




