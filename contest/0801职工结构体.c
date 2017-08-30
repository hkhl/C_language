/*************************************************************************
	> File Name: 0801职工结构体.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月26日 星期三 08时47分12秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct info
{
    int number;
    char name[50];
    char sex[10];
    int age;
    float sal;
    char address[100];
}A[3] = {{001, "张三", "男", 18, 6539.3, "西安"}, {002, "李四", "女", 18, 9999, "北京"}, {003, "王五", "男", 18, 12390, "上海"}};



int main()
{

    printf("职工号   姓名   性别     年龄    工资      地址\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%4d      %2s    %2s      %2d     %2.2f   %s\n", 
               A[i].number, A[i].name, A[i].sex, A[i].age, A[i].sal, A[i].address);
    }


    return 0;
}


