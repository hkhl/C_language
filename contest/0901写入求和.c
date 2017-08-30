/*************************************************************************
	> File Name: 0901写入求和.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月15日 星期二 12时54分11秒
 ************************************************************************/
//将10个整数写入数据文件f3.dat中， 再读出f3.dat中的数据并求和
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char * argv[])
{
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    FILE *pf = fopen("/home/wang/桌面/f3.dat","w+");
    //FILE *pf = fopen(argv[1],"w+");
    if(pf == NULL)
    {
        printf("打开文件失败\n");
    }
    else
    {
        printf("打开文件成功\n");
        for(int i = 0; i < 10; i++)
        {
            fprintf(pf,"%d\n",a[i]);
        }
        rewind(pf);
        
        int sum = 0;
        int a = 0;
        for(int i = 0; i < 10; i++)
        {
            sum += fscanf(pf,"%d\n", &a);
        }
        printf("sum = %d ", sum);
    }
    fclose(pf);
    return 0;
}
