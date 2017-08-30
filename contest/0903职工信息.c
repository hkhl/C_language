/*************************************************************************
	> File Name: 0903职工信息.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月15日 星期二 22时16分59秒
 ************************************************************************/
//将几名职工的数据从键盘输入， 然后送入磁盘文件worker1.rec中保存
//职工数据包括：职工号 职工名 性别 年龄 工资  再从磁盘调入这些数据 依次打印出来
//用fread 和 fwrite 函数
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct worker
{
    int id;
    char name[20];
    char sex[10];
    int age;
    int sal;
}W[3]/* = {{1001, "张三", "男", 18, 3000},
         {1002, "李四", "女", 18, 3500},
         {1003, "王五", "男", 18, 3900}}*/, M[3];

int main()
{
    char str[100];
    for(int i = 0; i < 3; i++)
    {
        scanf("%d%s%s%d%d",&W[i].id, W[i].name, W[i].sex,&W[i].age, &W[i].sal);  //取地址
    }
    FILE *pf = fopen("/home/wang/桌面/worker1.rec", "wb+");
    if(pf == NULL)
    {
        printf("打开文件失败\n");
    }
    else
    {
        fwrite(W, sizeof(struct worker), 3, pf);
        rewind(pf);
        fread(M, sizeof(struct worker), 3, pf);
    }
    for(int i = 0; i < 3; i++)
    {
        printf("%d  %s  %s  %d  %d \n",M[i].id, M[i].name,  M[i].sex,  M[i].age, M[i].sal);
    }
    fclose(pf);
    return 0;
}

