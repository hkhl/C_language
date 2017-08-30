/*************************************************************************
	> File Name: 0513提取元素逆序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月28日 星期五 17时50分26秒
 ************************************************************************/
//将字符数组a中下标偶数（02468等）的yuans传给另一个字符数组b
//然后将b数组逆序输出

#include<stdio.h>
void fun(char a[], char b[], int n)
{
    int i = 0;
    int count = 0;
    while((i < 50) && (a[i] != '\0'))
    {
        if(i%2 != 0)
        {
            //printf("%d ", i);
            i++;
            continue;   //如果下标是奇数 跳过本次循环
        }
        else
        {
            //printf("%c ", a[i]);
            b[count] = a[i];
            count++;
            i++;
        }
    }
    printf("%d\n", count);
    //逆序输出字符b
    for(int i = count-1; i >= 0; i--)
    {
        printf("%c ", b[i]);
    }

}
int main()
{
    char a[50] = "012345678901234567890123456";
    char b[50] = "\0";
    
    fun(a, b, 50);

    return 0;
}
