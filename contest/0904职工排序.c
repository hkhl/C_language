/*************************************************************************
	> File Name: 0904职工排序.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月16日 星期三 12时27分14秒
 ************************************************************************/
//将存放在worker1.rec中的职工数据按工资高低排序，将排序的各记录放在worker2.rec中
//
//用fread 和 fwreite 函数
#include<stdio.h>
struct worker
{
    int id;
    char name[20];
    char sex[10];
    int age;
    int sal;
}W[3], M[3];
int main()
{
    FILE *pfr = fopen("/home/wang/桌面/worker1.rec","rb");
    if(pfr == NULL)
    {
        printf("打开文件失败\n");
    }
    FILE *pfw = fopen("/home/wang/桌面/worker2.rec","wb+");
    if(pfw == NULL)
    {
        printf("打开文件2失败\n");
    }
    fread(M, sizeof(M), 1, pfr);
    for(int i = 0; i < 2; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            if(M[i].sal < M[j].sal)
            {
                struct worker S;
                S = M[i];
                M[i] = M[j];
                M[j] = S;
            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
        printf("%d  %s  %s  %d  %d \n",M[i].id, M[i].name,  M[i].sex,  M[i].age, M[i].sal);
    }
    fwrite(M, sizeof(M), 1, pfw);
    fclose(pfw);
    fclose(pfr);
    return 0;
}
