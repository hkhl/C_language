/*************************************************************************
	> File Name: 0518回文数.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月30日 星期日 15时02分22秒
 ************************************************************************/
//打印所有不超过n的平方具有对称性的数（回文数）
//n不超过256
#include<stdio.h>
int nixu(int num)  //实现某个数的逆序 
{
    int res = 0;
    int temo = num;
    while(num)    
    {
        res = res*10 + num%10;
        num /= 10;
    }
    return res;

}
void huiwen(int n)
{
    if(n == 0)
    {
        return ;
    }
    if(n*n == nixu(n*n))
    {
        printf("\n%d平方是回文数:%d",n , n*n);
    }
    huiwen(n-1);
}
int main()
{
    
    huiwen(256);

    return 0;
}
