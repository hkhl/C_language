/*************************************************************************
	> File Name: p21_8_digui.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月18日 星期二 17时48分38秒
 ************************************************************************/
//递归判断一个数是否是素数

#include<stdio.h>
#include<math.h>
/*void fun1(int n)
{
    static int k = sqrt(1000);        //求1000以内某个数是否是素数
    //static int k = (int)sqrt(n); //报错， 不是常量
    if(k == 1)
    {
        printf("Yes");
        return;
    }
    if(n % k == 0)
    {
        printf("NO");
        return;
    }
    k--;
    fun1(n);  
}*/
int fun2(int n, int sn)
{
    if(n < 2)
    {
        return 0;
    }
    else
    {
        if(sn < 2)
        {
            return 1;
        }
        else if(n % sn == 0)
        {
            return 0;
        }
        else
        {
            fun2(n, sn-1);
        }
    }
}
int main()
{
    int num = 0;
    scanf("%d", &num);
    int snum = sqrt(num);

    // fun1(num);

    if(fun2(num, snum))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
