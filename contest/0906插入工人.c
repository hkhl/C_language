/*************************************************************************
	> File Name: 0906插入工人.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月16日 星期三 15时01分07秒
 ************************************************************************/
//插入0903中的职工信息的一员，插入后仍保持原来的顺序，
//按照工资高低插入到原来的文件中
//并将信息写入到worker3.rec中
#include<stdio.h>
struct worker
{
    int id;
    char name[20];
    char sex[10];
    int age;
    int sal;
}M[100],P;

/*void readworker(struct worker *tempemp, int n)
{
    FILE *pf = NULL;
    if(n == 2)
    {
        pf = fopen("/home/wang/桌面/worker2.rec", "rb");
    }
    if(n == 3)
    {
        pf = fopen("/home/wang/桌面/worker3.rec", "rb");
    }

    if(pf)
    {
        struct worker temp;
        fread(&temp, sizeof(temp), 1, pf);
        int i = 0;
        while(!feof(pf))
        {
            tempemp[i] = temp;
            fread(&temp, sizeof(temp), 1, pf);
            printf("%d %s %s %d %d\n", tempemp[i].id, tempemp[i].name, tempemp[i].sex, tempemp[i].age, tempemp[i].sal);
            i++;
        }
    }
    else
    {
        printf("open file failed!\n");
    }
    fclose(pf);
}

void sort(struct worker *tempemp)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = i+1; j < 4; j++)
        {
            if(tempemp[i].sal < tempemp[j].sal)
            {
                struct worker temp;
                temp = tempemp[i];
                tempemp[i] = tempemp[j];
                tempemp[j] = temp;
            }
        }
    }
}
void writeworker(struct worker *tempemp, int n)
{
    FILE *pf = NULL;
    if(n == 2)
    {
        pf = fopen("/home/wang/桌面/worker2.rec", "wb");
    }
    if(n == 3)
    {
        pf = fopen("/home/wang/桌面/worker3.rec", "wb");
    }

    if(pf)
    {
        for(int i = 0; i < 4; i++)
        {
            fwrite(&tempemp[i], sizeof(tempemp[i]), 1, pf);
        }
    }
    else
    {
        printf("open file failed!\n");
    }
    fclose(pf);
}
int main()
{
    //读取worke2中职工信息，  对比工资写入someone
    //再次读取信息写入到worker3中
    int N = 4;    
    struct worker emp[N];

    //插入员工的信息
    struct worker someone = {114, "赵六", "女", 20, 2100};
    readworker(emp,2);
    printf("\n\n");
    emp[3] = someone;
    sort(emp);

    writeworker(emp,2);
    writeworker(emp,3);
    readworker(emp,2);

    return 0;
}*/

int main()
{
    struct worker someone = {116, "赵7", "女", 30, 5000};
    FILE *pf = fopen("/home/wang/桌面/worker2.rec", "rb+");
    FILE *pf4 = fopen("/home/wang/桌面/worker4.rec", "wb+");
    if(pf)
    {
        struct worker temp;
        fread(&temp, sizeof(temp), 1, pf);
        while(!feof(pf)) 
        {
            if(temp.sal > someone.sal)
            {
                fwrite(&temp, sizeof(temp), 1, pf4);
            }
            else
            {
                fwrite(&someone, sizeof(someone), 1, pf4);
                break;
            }
            fread(&temp, sizeof(temp), 1, pf);
        }
        fseek(pf4, 0, SEEK_END);
        while(!feof(pf))
        {
            fread(&temp, sizeof(temp), 1, pf);
            fwrite(&temp, sizeof(temp), 1, pf4);
        }

        rewind(pf4);
        fread(M, sizeof(M), 1, pf4);
        for(int i = 0; i < 3; i++)
        {
            printf("%d %s %s %d %d\n", M[i].id, M[i].name, M[i].sex, M[i].age, M[i].sal);
        }
    }
    else
    {
        printf("open file failed!\n");
    }
    fclose(pf);
    fclose(pf4);
    return 0;
}
