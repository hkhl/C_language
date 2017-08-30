/*************************************************************************
	> File Name: p21_23.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月27日 星期四 16时26分51秒
 ************************************************************************/
//两乒乓球队比赛各出3人
//甲A B C 乙 X Y Z
//A说不和X比
//C说不和X Z 比
//求除三对赛手名单

/*********先对ABC求全排列 然后剔除无用的答案************/
#include<stdio.h>
#include<stdbool.h>
void swap(char *arr, int m, int n);
void pailie(char *arr, char* brr, int len, int k);
int main()
{
    char arr[] = "ABC";
    char brr[] = "XYZ";

    pailie(arr, brr, 3, 0);
    return 0;
}

void swap(char *arr, int m, int n)
{
    char c = arr[m];
    arr[m] = arr[n];
    arr[n] = c;
}
void pailie(char *arr, char *brr, int len, int k)
{
    bool flag = true;
    if(k == len ) 
    {
        /*for(int i = 0; i < 3; i++)
        {
            if((arr[i] == 'C' && brr[i] == 'X') || (arr[i] == 'C' && brr[i] == 'Z'))
            {
                break;
            }
            else if(arr[i] == 'A' && brr[i] == 'X')
            {
                break;
            }
            else //有问题，当排序到BAC时i，三次循环两次都不会break故会多打印两次B:X  A:Y  （BCA正确答案）
            {
                printf("%c VS %c\n", arr[i],brr[i]);
            }
        }*/


        for(int i = 0; i < 3; i++)
        {
            if(arr[i] == 'C' && (brr[i] == 'X' || brr[i] == 'Z'))
            {
                flag = false;
                break;
            }
            else if(arr[i] == 'A' && brr[i] == 'X')
            {
                flag = false;
                break;
            }    
        }
        if(flag == true)
        {
            for(int i = 0; i < 3; i++)
            {
                printf("%c : %c\n", arr[i], brr[i]);
            }
        }
}
    else
    {
        for(int i = k; i < len; i++)        //i一直变 不变的是K 故可以交换过去也可交换回来
        {                                   //规模减小靠的是K的增加 也就是第一个不变的位置 开始a不变 a分别和abc交换 打印
            swap(arr, i, k);                //K+1后 b不变 分别和 b c 交换 打印
            pailie(arr, brr, len, k+1);    //最后一个不需要交换 故k == len 的时候跳出递归即可
            swap(arr, i ,k);
        }
    }
}
