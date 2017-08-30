/*************************************************************************
	> File Name: 0703移位.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月13日 星期六 16时35分21秒
 ************************************************************************/
//有n个整数 使前面各数顺序向后移m个位置，最后m个数变成最前m个数
//在主函数中输入n个整数和输出调整后的n个数
#include<stdio.h>
#define N 10

void move(int a[], int m) //移动m个位置
{
    int temp[m];  
    int b[N];
    for(int i = 0; i < N; i++)
    {
        b[i] = a[i];
    }

    if(m <= N)
    {
        for(int i = N-m; i < N; i++)
        {
            temp[i-N+m] = a[i];
        }
        for(int i = m; i < N; i++)
        {
            a[i] = b[i-m];
        }

        for(int i = 0; i < m; i++)
        {
            a[i] = temp[i];

        }
    }
    else
    {
        printf("输入错误");
    }

}
int main()
{
    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int mov = 0;

    printf("请输入要移动前几个数字？");
    scanf("%d", &mov);
    
    move(arr,mov);


    for(int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
