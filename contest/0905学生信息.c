/*************************************************************************
	> File Name: 0905学生信息.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月16日 星期三 13时12分47秒
 ************************************************************************/
//用scanf函数从键盘输入5个学生数据 姓名 学好 3门乘积 求出平均分
//用fprintf将所有信息放在磁盘文件stud.rec中，再用fscnaf函数读取数据显示出来
#include<stdio.h>
struct stu
{
    char name[20];
    int id;
    float ave;
    struct grade
    {
        float chinese;
        float math;
        float english;
    }grade;
}stu[3] ,Stu[3];

int main()
{
    printf("请输入三名同学的信息：\n"); 
    for(int i = 0; i < 3 ;i++)
    {
        scanf("%s%d%f%f%f",stu[i].name, &stu[i].id, &stu[i].grade.chinese, 
               &stu[i].grade.math, &stu[i].grade.english);
        stu[i].ave = (stu[i].grade.chinese + stu[i].grade.math + stu[i].grade.english) / 3;
    } 
    
    FILE *pf = fopen("/home/wang/桌面/stud.rec", "w+");
    for(int i = 0; i < 3; i++)
    {
        fprintf(pf, "%s  %d   %.2f  %.2f  %.2f   平均分 %.2f \n",stu[i].name, stu[i].id, stu[i].grade.chinese, 
          stu[i].grade.math,stu[i].grade.english, stu[i].ave);
    }
    rewind(pf);
    for(int i = 0; i < 3; i++)
    {
        fscanf(pf, "%s  %d  %f  %f  %f  平均分%f\n", Stu[i].name, &Stu[i].id, &Stu[i].grade.chinese, &Stu[i].grade.math, 
               &Stu[i].grade.english, &Stu[i].ave);
        printf("%s  %d   %.2f  %.2f  %.2f   平均分 %.2f \n",Stu[i].name, Stu[i].id, Stu[i].grade.chinese, 
               Stu[i].grade.math,Stu[i].grade.english, Stu[i].ave);
    }
    return 0;
}
