/*************************************************************************
	> File Name: 037矩阵.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月17日 星期日 12时52分07秒
 ************************************************************************/
//一直三个数组A B C
//A为5行5列  将A每行和放在B数组中   每列和放在C数组中

#include<stdio.h>
int main()
{
    int a[5][5] = {23,45,6,1,-3,4,5,233,456,0,3,56,78,-56,5,6,77,8,89,9,3,6,8,9,90};
    int b[5] = {0};
    int c[5] = {0};

    int rowsum = 0;
    int columnsum = 0;
    for(int i = 0; i < 5; i++)
    {
        rowsum = 0;
        columnsum = 0;
        for(int j = 0; j < 5; j++)
        {
            rowsum +=a [i][j];
            columnsum += a[j][i];
        }
        b[i] = rowsum;
        c[i] = columnsum;
    }
    

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%3d ", a[i][j]);
        }
        printf("%3d \n", b[i]);

    }
    for(int i = 0; i < 5; i++)
    {
        printf("%3d ", c[i]);
    }
}


