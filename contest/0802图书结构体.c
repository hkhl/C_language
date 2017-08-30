/*************************************************************************
	> File Name: 0802图书结构体.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月26日 星期三 09时00分01秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//如下的结构体，  按照书名排序 ,  按照书名查询图书, 如果图书存在，打印书名， 否则查无此书

struct book
{
    char name[30];
    char author[30];
    int num;
    int date;
};
int flag = 0;

void sortbook(struct book *p)
{
    for(int i = 0; i < flag - 1; i++)
    {
        for(int j = 1; j < flag; j++)
        {
            if(strcmp(p[i].name,p[j].name) > 0)
            {
                struct book temp;
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void findbook(struct book *p)
{
    printf("请输入要查询图书的书名：");
    char str[30];
    scanf("%s", str);
    for(int i = 0; i < flag; i++)
    {
        if(strcmp(str, p[i].name) == 0)
        {
            printf("书名:%s  作者:%s   编号:%d   出版日期:%d", p[i].name, p[i].author, p[i].num, p[i].date);
            return ;
        }
    }
    printf("查无此书！");

}

void addbook(struct book *p)
{
    printf("您想添加几本图书？");
    int n = 0;
    scanf("%d", &n);
   
    printf("请输入书名，作者， 编号，出版日期(年):\n");
    
    for(int i = flag; i < flag + n; i++)
    {
        //char str[30];
        //scanf("%s", str);
        //sprintf(p[i].name, "%s", str);
        //scanf("%s", str);
        //sprintf(p[i].author, "%s", str);
        scanf("%s%s%d%d",p[i].name, p[i].author, &p[i].num, &p[i].date);
    }
    flag += n;

}

void lookbook(struct book *p)
{
    if(flag == 0)
    {
        printf("没有库存i\n");
        return ; 
    }
    printf("书籍内容如下：\n");
    printf("书名  作者  编号   出版日期\n");
    for(int i = 0; i < flag; i++)
    {
        printf("%s    %s    %d     %d\n", p[i].name, p[i].author, p[i].num, p[i].date);
    }
    
    
}
int main()
{
    struct book b[100]; 
    printf("simple book system:");
    int n = 0;
    A:
    while(1)
    {
        printf("\n1. *** 排序图书");
        printf("\n2. *** 查询图书");
        printf("\n3. *** 添加图书");
        printf("\n4. *** 查看图书");
        printf("\n0. *** 退出");
        printf("\n请输入选择:");
        scanf("%d", &n);
        if( n >= 0 && n <= 4 )
        {
            break;
        }
        else
        {
            printf("您输入的选项有误！请输入正确选项");
        }
    }
    
    switch(n)
    {
        case 0 : exit(0);                break;
        case 1 : sortbook(b);  goto A;    break;
        case 2 : findbook(b);  goto A;    break;
        case 3 : addbook(b);  goto A;    break;
        case 4 : lookbook(b); goto A;    break;
        default: printf("error");
    }

    return 0;
}
