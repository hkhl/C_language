/*************************************************************************
	> File Name: 068字符串排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月27日 星期三 19时25分28秒
 ************************************************************************/
/*
* 在主函数中输入10个不等长的字符串用另一函数对它们排序。
* 然后在主函数中输出这10个已排好序的字符串用指针数组完成
* */
#include<stdio.h>
#include<string.h>

void sort(char *p[10])
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(strcmp(p[i], p[j]) > 0)
            {
                char *temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

}

int main()
{
    char *p[10] = {"goodgood","studystudy","upup","hello","myname",
                  "wuyu","china","america","english","england"};

    sort(p);

    for(int i = 0; i < 10; i++)
    {
        printf("%s\n", p[i]);
    }
    

    return 0;
}
