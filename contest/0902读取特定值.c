/*************************************************************************
	> File Name: 0902读取特定值.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月15日 星期二 22时06分48秒
 ************************************************************************/
//一个以%5d格式存放20个整数的文件f4.dat 顺序号为0-19  输入某一顺序号，读出相应的数据显示屏幕
#include<stdio.h>

int main()
{
    int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    FILE *pf = fopen("/home/wang/桌面/f4.dat", "w+");
    if(pf == NULL)
    {
        printf("打开文件失败\n");
    }
    else
    {
        for(int i = 0; i < 20; i++)
        {
            fprintf(pf,"%5d\n", a[i]);
        }
        rewind(pf);
        printf("请输入顺序号（0-19）：");
        int num = 0;
        int number = 0;
        scanf("%d", &num);
        for(int i = 0; i <= num; i++)
        {
            fscanf(pf,"%5d\n",&number);
        }
        printf("%d", number);
    }
    fclose(pf);


    return 0;
}
