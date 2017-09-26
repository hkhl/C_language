/*************************************************************************
	> File Name: 051数字序列.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月21日 星期四 16时19分55秒
 ************************************************************************/
//1234是升序
//4321是降序
//1324是无序
//请输入一个大于9的数字,  判断其什么序列
#include<stdio.h>

int wei(int n)
{
    int num = 0;
    while(n)
    {
        n /= 10;
        num++;
    }
    return num;

}
void whatsort(int num, int len)
{
    int a[20] = {0};
    int lenbak = len;
    while(lenbak)
    {
        a[lenbak-1] = num%10;
        num = num/10;
        lenbak--;
    }


    int falg = 0;
    //12345
    //

    int i = 0;
    int j = 1;
    int flag = 0;
    if(a[i] < a[j])
    {
        lenbak = len-1;
        while(lenbak)
        {
            flag = 0;
            if(a[i] < a[j])
            {
                flag = 1;
            }
            i++,j++;
            lenbak--;
        }
        if(flag == 1)
        {
            printf("升序\n");
        }
        else 
        {
            printf("无序1\n");
        }
    }
    else if(a[i] > a[j])
    {
        i = 0, j = 1;
        lenbak = len-1;
        while(lenbak)
        {
            flag = 0;
            if(a[i] > a[j])
            {
                flag = 1;
            }
            i++,j++;
            lenbak--;
        }
        if(flag == 1)
        {
            printf("降序\n");
        }
        else 
        {
            printf("无序2\n");
        }
    }
    else
    {
        lenbak = len-1;
        i = 0,j = 1;
        while(lenbak)
        {
            flag = 0;
            if(a[i] == a[j])
            {
                flag = 1;
            }
            i++,j++;
            lenbak--;
        }
        if(flag == 1)
        {
            printf("等序\n");
        }
        else
        {
            printf("无序3\n");
        }
    }
}

int main()
{
    int num = 122;

    int len = wei(num);

    whatsort(num, len);
    return 0;
}
