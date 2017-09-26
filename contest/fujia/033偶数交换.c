/*************************************************************************
	> File Name: 033偶数交换.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月15日 星期五 18时15分05秒
 ************************************************************************/
//将一个一维数组的偶数依次交换, 例如8个元素  其中第1 4 5 三元素是偶数时
// 2  3  1  6  8  7  9  5
// 6  3  1  2  8  7  9  5
// 6  3  1  8  2  7  9  5
// 2  3  1  8  6  7  9  5
#include<stdio.h>
int main()
{
    int a[8] = {2, 3, 1, 6, 8, 7, 9, 5};
    for(int i = 0; i < 8; i++)
    {
        if(a[i] % 2 == 0)
        {
            for(int j = i+1; j < 8; j++)
            {
                if(a[j] % 2 == 0)
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
    }
    int flag = 0;
    for(int i = 0; i < 8; i++)
    {
        if(a[i] % 2 ==  0)
        {
            for(int j = 7; j >= 0; j--)
            {
                if(a[j] % 2 == 0)
                {
                    flag = 1;
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
            }
            if(flag = 1)
            {
                break;
            }
        }
    }


    for(int i = 0; i < 8; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}

