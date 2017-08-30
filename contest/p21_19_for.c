/*************************************************************************
	> File Name: p21_19_for.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月25日 星期二 18时39分35秒
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    double a[1000]  = {1};
    double b[1000]  = {1};
    double sum1 = 1;
    double sum2 = 1;
    double res = 0.0;
    double db = 0.0;

    printf("请输入精确度(0.1, 0.01, 0.001, 0.0001, 0.00001)：");
    scanf("%lf", &db);

    sum2 = (2.0/3) * (4.0/3);
    for(int i = 1; i < INT_MAX; i++)
    {
        a[i] = ((2.0*i) / (2.0*i+1)) * ((2.0*i+2) / (2.0*i+1));
        b[i] = ((2.0*(i+1)) / (2.0*(i+1)+1)) * ((2.0*(i+1)+2) / (2.0*(i+1)+1));
        sum1 *= a[i];//存储到第i位
        sum2 *= b[i];//第一位初始化给过  存储到第i+1位

        res = sum1 - sum2;
        
        if(db == 0.1)
        {
            if(res - db < DBL_EPSILON) //双精度比较大小 epsilon
            {
                printf("%.20lf ", sum1);
                break;
            }
        }
        else if(db == 0.01)
        {
            if(res - db < DBL_EPSILON)
            {
                printf("%.20lf ", sum1);
                break;
            }

        }
        else if(db == 0.001)
        {
            if(res - db < DBL_EPSILON)
            {
                printf("%.20lf ", sum1);
                break;
            }
            
        }
        else if(db == 0.0001)
        {
            if(res - db < DBL_EPSILON)
            {
                printf("%.20lf ", sum1);
                break;
            }

        }
        else if(db == 0.00001)
        {
            if(res - db < DBL_EPSILON)
            {
                printf("%.20lf ", sum1);
                break;
            }
            
        }
        else
        {
            printf("输入错误");
            break;
        }
        
    }
    return 0;
}
