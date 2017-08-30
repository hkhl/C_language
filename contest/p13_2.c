/*************************************************************************
	> File Name: p13_2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 22时32分15秒
 ************************************************************************/
 /*输入一个字符
  * 大小写字母互换
  * 数字则输出
  * 空格输出space
  * 其他输出other
  */
#include<stdio.h>
int main()
{
    char s;
    s = getchar();
    
    if('a' <= s && s <= 'z')
    {
        s -= 32;                //s = s - 'a' + 'A';
        printf("%c", s);
    }
    else if('A' <= s && s <= 'Z')
    {
        s += 32;
        printf("%c", s);
    }   
    else if('0' <= s && s<= '9')  //1-9 ASCII 码为49 - 57
    {
        printf("%c", s);
    }
    else if(s == ' ')
    {
        printf("space");
    }
    else
    {
        printf("other");
    } 
    return 0;
}
