/*************************************************************************
	> File Name: qufan.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月02日 星期日 19时56分03秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define N 5
/*int fun1(int x, int aa)
{
    int temp = 0;
    temp = x *pow(10,N-aa);
    return temp;
}*/

/*int fun(int x)
{
    static int sum1 = 0;
    static int sum = 0;
    if(x < 10)
        return sum1 + x;
    else
        sum = x%10;
        static int aa = 0;
        aa++;
        sum1 += fun1(sum,aa);
        
        return fun(x/10);
}*/
int fun(int x)
{
    static int temp = 0;
    if(x == 0)
        return temp;
    else
        temp = x%10 + temp*10;
    return fun(x/10);
}
int main()
{
    int x = 0;
    int a = 0;
    printf("请输入一个%d位整数：", N);
    scanf("%d", &x);

    a = fun(x);
    printf("%d", a);
    return 0;
}
