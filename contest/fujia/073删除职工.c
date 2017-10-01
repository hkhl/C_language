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
*
* 新增加一个职工数据。这个新结点不放在最后而是按职工号顺序插入新职工号为106。
* 写一函数insert来插入结点
*
* 在上两题的基础上写一函数用来删除一个结点按指定职工号删除
* */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 3

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

//建立链表 添加节点
void create(Node **head, int no, float sal)
{
    Node *h = *head;
    Node *p;
    if(*head == NULL)      //创建头节点
    {
        new(&p, no, sal);
        *head = p;          
    }
    else                   //创建其他节点
    {
        while(h->next)
        {
            h = h->next;
        }
        new(&p, no, sal);
        h->next = p;
    }
}

//有序顺序
void insert(Node **head)
{
    printf("请输入要插入的职工信息:\n");
    int no;
    float sal;
    scanf("%d%f", &no, &sal);
    
    Node *p1 = *head;
    Node *p2;

    while(p1 != NULL && p1->no <= no) //先判断是否为NULL
    {
        p2 = p1;
        p1 = p1->next;
    }
    
    Node *q;
    new(&q, no, sal);
    if(p1 == *head)             //头部插入
    {
        q->next = p1;
        *(head) = q;
    }
    else if(p1 == NULL)         //尾部插入
    {
        p2->next = q;   
    }
    else                        //中间插入
    {
        q->next = p2->next;
        p2->next = q;
    }
}

//按职工号删除信息
void DeleteNode(Node **head, int no)
{
    Node *p1, *p2;
    p1 = p2 = NULL;

    p1 = *head;
    while(p1)   //遍历节点 找到节点
    {
        if(p1->no == no)
        {
            break;
        }
        p2 = p1;
        p1 = p1->next;
    }

    if(p1 == *head)          //删除头节点
    {
        (*head) = p1->next;  //跳过头节点
        free(p1);            //释放头节点
    }
    else                     //删除其他节点
    {
        p2->next = p1->next;
        free(p1);
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
    printf("请输入%d个员工信息(职工号, 工资):", N);
    for(int i = 0; i < N; i++)
    {
        fscanf(stdin, "%d%f", &no, &sal);
        create(&head, no, sal);
    }
    list(head);
    insert(&head);
    list(head);

    printf("请输入要删除的职工号:");
    scanf("%d", &no);
    printf("删除节点后:\n");
    DeleteNode(&head, no);
    list(head);

    return 0;
}
