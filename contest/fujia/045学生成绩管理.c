/*************************************************************************
	> File Name: 045学生成绩管理.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月19日 星期二 22时24分30秒
 ************************************************************************/
//用来记录一个学生的成绩情况.
//包括学生的姓名  学号 数学成绩 和 PASCAL成绩
//要求对一个小组的10个学生的成绩进行统计处理
//1)计算学生的总平均分, 并按平均分高低排出名词 打印姓名
//2)打印出90分以上和不及格的名字
//用子程序来完成
#include<stdio.h>
#define N 3


typedef struct Grade
{
    float math;
    float PASCAL;
}Gra;
typedef struct Student
{
    int num;
    Gra gra;
    char name[20];
}Stu;

void Init(Stu *stu)
{
    //初始化第1个学生
    stu[0].num = 1001;
    stu[0].gra.math = 99;
    stu[0].gra.PASCAL = 98;
    sprintf(stu[0].name, "zhangsan");
    //初始化第2个学生
    stu[1].num = 1002;
    stu[1].gra.math = 59;
    stu[1].gra.PASCAL = 98;
    sprintf(stu[1].name, "lisi");
    //初始化第3个学生
    stu[2].num = 1003;
    stu[2].gra.math = 89;
    stu[2].gra.PASCAL = 98;
    sprintf(stu[2].name, "wangwu");
}

void GradeAve(Stu *stu, float a[])
{
    float sum = 0.0;

    for(int i = 0; i < 3; i++)
    {
        sum = stu[i].gra.math + stu[i].gra.PASCAL;
        a[i] = sum / 2;
    }
}

void Sort(Stu *stu, float a[])   //结构体排序
{
    for(int i = 0; i < N-1; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            if(a[i] < a[j])
            {
                Stu temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
}
void Print(Stu *stu, float a[])
{
    for(int i = 0; i < N; i++)
    {
        printf("第%d名:  %s\n", i+1, stu[i].name);
    }

    for(int i = 0; i < N; i++)
    {
        if(stu[i].gra.math > 90 && stu[i].gra.PASCAL > 90)
        {
            printf("90+:%s\n", stu[i].name);
        }
        if(stu[i].gra.math < 60 || stu[i].gra.PASCAL < 60)
        {
            printf("不及格:%s\n", stu[i].name);
        }
    }

}

int main()
{

    Stu stu[N];
    float a[N];  //记录平均分
    Init(stu);
    GradeAve(stu, a);
    Sort(stu, a);
    Print(stu, a);
    return 0;
}

