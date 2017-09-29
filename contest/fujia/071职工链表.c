/*************************************************************************
	> File Name: 071职工链表.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月29日 星期五 20时09分47秒
 ************************************************************************/
/*
* 建立一个链表每个结点包括的成员为职工号、工资。
* 用new函数开辟新结点。要求链表包括5个结点  从键盘输入结点中的有效数据。然后把这些结点的数据打印出来。
* 要求用函数 creat 来建立链表,用 list 函数来输出数据。
* 这5个职工的职工号是101,103,105,107,109
* */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
    int no;
    float sal;
    struct node *next;
}Node;

void list(Node *head)
{
    if(head != NULL)
    {
        printf("职工号     工资      下一个指向\n");
        while(head != NULL)
        {
            printf(" %d        %.2f    %p\n", head->no, head->sal, head->next);
            head = head->next;
        }
    }
    else
    {
        printf("空链表哦\n");
    }
}

//开辟节点
void new(Node **p, int no, float sal)
{
    *p = (Node *)malloc(sizeof(Node));
    if(*p != NULL)
    {
        (*p)->no = no;
        (*p)->sal = sal;
        (*p)->next = NULL;
    }
    else
    {
        printf("创建节点失败\n");
    }
}

//建立链表
void create(Node **head, int no, float sal)
{
    Node *h = *head;
    Node *p;
    if(*head == NULL)
    {
        new(&p, no, sal);
        *head = p;          
    }
    else
    {
        while(h->next)
        {
            h = h->next;
        }
        new(&p, no, sal);
        h->next = p;
    }
}

//销毁链表
void FreeAll(Node **head)
{
    Node *p1 = *head;
    Node *p2 = NULL;
    Node *q = NULL;
    while(p1->next)
    {
        p2 = p1->next;
        p1->next = p2->next;
        free(p2);
    }
    free(*head);
    *head = NULL;
    
}

int main()
{
    Node *head = NULL;
    int no = 0;
    float sal = 0.0f;
    printf("请输入5个员工信息(职工号, 工资):");
    for(int i = 0; i < 5; i++)
    {
        fscanf(stdin, "%d%f", &no, &sal);
        create(&head, no, sal);
    }
    list(head);



    return 0;
}
