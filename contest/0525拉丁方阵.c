/*************************************************************************
	> File Name: 0525拉丁方阵.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月02日 星期二 16时39分57秒
 ************************************************************************/
//程序的每行每列均为自然数的全排列
     /*
      * 1 5 2 4 3
      * 2 3 4 5 1
      * 4 1 5 3 2
      * 5 2 3 1 4
      * 3 4 1 2 5
      */
//该数组第一行的是程序自动生成的，但产生的第一行不一定非的是15243,
//第一行填写完毕后，即以第一行作文全方阵的索引，即若第一行中的第i列的元素值为j，
//则j在各行中的列号即为第一行元素值i的那一列开始读出的n个自然数（到行末则从行头接着读），
//例如第一行第2列的元素值为5,则从元素子为2的那一列（第三列）开始读出2,4,3,1,5,这就是元素5在各行中的列标号
#include<stdio.h>
#define N  8
int find(int a[][N], int num)
{
    for(int i = 0; i < N; i++)
    {
        if(a[0][i] == num)
        {
            //printf("%d ", i);
            return i;         //返回12345分别在数组中的位置
        }
    }
}

void trans(int a[][N], int loc, int b[])
{
    int flag1 = 0;      //找到的loc位置开始 依次从loc将五个数放在b数组中 
    
    for(int i = 0; i < N; i++)
    {
        int flag = loc + i;
        if(flag < N)
        {
            b[i] = a[0][flag];
        }
        else
        {
            b[i] = a[0][flag1];
            flag1++;
        }
    }
}

void fuzhi(int a[][N], int b[], int temp)
{
    for(int i = 0; i < N; i++)
    {
        a[i][b[i]-1] = temp;
    }
}

    //然后b[0]~b[N-1] 依次给a[i][b[x]] = num;
int main()
{
    int i = 0;
    int j = 0;
    int a[N][N] = {0};
    int b[N] = {0};          
    int loc = 0;

    printf("请输入数组第一列的值：");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[0][i]);
    }

    //填充
    for(j = 0; j < N; j++)
    {
        int temp = a[0][j];//依次获取第一行元素 
        
        loc = find(a, j+1); //找到12345分别在数组中的位置
        
        trans(a, loc, b); //找到位置后 转变为
        /*1 5 2 4 3      每一行存入数组b[i]中 a[0~4][ b[i]-1 ] = 1;
         *2 4 3 1 5                           a[0~4][ b[i]-1 ] = 5;
         *3 1 5 2 4                             ......
         *4 3 1 5 2
         *5 2 4 3 1
        */
        
        fuzhi(a, b, temp);
    }


    //打印
    putchar(10);
    for(i = 0; i < N; i++)
    {
        for( j = 0; j < N; j++)
        {
            printf("%d ", a[i][j]);
        }
        putchar(10);
    }

    return 0;
}
