/*************************************************************************
	> File Name: 0907删除工人信息.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月17日 星期四 13时09分23秒
 ************************************************************************/
//删除worker2.rec中某个序号的职工记录
//
//
#include<stdio.h>
struct worker
{
    int id;
    char name[20];
    char sex[10];
    int age;
    int sal;
}W[3], M[3];

//删除序号id = 1001 
int main()
{
    FILE *pf = fopen("/home/wang/桌面/worker2.rec", "rb+");
    FILE *pf1 = fopen("/home/wang/桌面/worker.rec", "wb+");
    if(pf1 == NULL)
    {
        printf("error");
    }
    if(pf == NULL)
    {
        printf("打开文件失败\n");
    }
    fread(M, sizeof(M), 1, pf);
    for(int i = 0; i < 3; i++)
    {
        printf("%d  %s %s %d %d\n", M[i].id, M[i].name, M[i].sex, M[i].age, M[i].sal);
    }

    rewind(pf);

    struct worker temp;
    fread(&temp, sizeof(temp), 1, pf);
    while(!feof(pf))
    {
        if(temp.id == 1001)
        {
        
        }
        else
        {
            fwrite(&temp, sizeof(temp), 1, pf1);
        }
        fread(&temp, sizeof(temp), 1, pf);
    }
    
    printf("\n\n");
    rewind(pf1);
    fread(W, sizeof(W), 1, pf1);
    for(int i = 0; i < 3; i++)
    {
        printf("%d  %s %s %d %d\n", W[i].id, W[i].name, W[i].sex, W[i].age, W[i].sal);
    }
    return 0;
}
