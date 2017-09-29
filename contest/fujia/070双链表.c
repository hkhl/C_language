/*************************************************************************
	> File Name: 070双链表.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月29日 星期五 18时20分25秒
 ************************************************************************/
// 有两个链表a和b。
// 设结点中包含学号、姓名 等信息。从链表a中删除与链表b中有相同学号的那些结点。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
    int no;
    int age;
    char sex[5];
    char name[20];
    struct node *next;
}Node;

void Print(Node *head)
{
    if(head != NULL)
    {
        printf("学号   年龄   性别   姓名    下一个指向\n");
        while(head != NULL)
        {
            printf("%d    %d     %s     %s   %p\n", head->no, head->age, head->sex, head->name, head->next);
            head = head->next;
        }
    }
    else
    {
        printf("空链表哦\n");
    }
}

void CreateNode(Node **p, int no, int age, char *sex, char *name)
{
    *p = (Node *)malloc(sizeof(Node));
    if(*p != NULL)
    {
        (*p)->no = no;
        (*p)->age = age;
        strcpy((*p)->sex, sex);
        strcpy((*p)->name, name);
        (*p)->next = NULL;
    }
    else
    {
        printf("创建节点失败\n");
    }
}

//为空创建添加节点,, 不为空尾部插入...
void Add(Node **head, int no, int age, char *sex, char *name)
{
    Node *h = *head;
    Node *p;
    if(*head == NULL)
    {
        CreateNode(&p, no, age, sex, name);
        *head = p;           //只有第一次赋值
    }
    else
    {
        while(h->next)
        {
            h = h->next;
        }
        CreateNode(&p, no, age, sex, name);
        h->next = p;
    }
}

//学号是no的成员删除
void DeleteNode(Node **head, int no)
{
    if(head!= NULL)
    {
        Node *p1 = *head;
        Node *p2 = p1->next;
        //如果删除的是首位元素
        if((*head)->no == no)
        {
            *head = (*head)->next;
        }
        else   //删除的不是首个元素
        {
            while(p2 != NULL)
            {
                if(p2->no == no)
                {
                    p1->next = p2->next;
                    break;
                }
                p1 = p1->next;
                p2 = p1->next;
            }
        }
    }
    else
    {
        printf("空链表\n");
    }
}


//删除所有节点
//最后删除头节点
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


//链表的逆转
void LinkRev(Node **head)
{
    Node *p1, *p2, *p3;
    p1 = p2 = p3 = NULL;

    p1 = *head;
    p2 = p1->next;
    while(p2)
    {
        p3 = p2->next;

        p2->next = p1;  //指向前一个元素

        p1 = p2;
        p2 = p3;
    }
    (*head)->next = NULL;    //不加这条语句, 将会在1,2节点之间来回跳
    *head = p1;        //指向最后一个节点
    
}

void DeleteTheSameNo(Node **head, Node **daeh)
{
    //找到其中相同的,两边再都删除
    Node *p, *q;
    p = *head;
    q = *daeh;
    
    int a[10] = {0};
    int i = 0;
    while(p)
    {
        q = *daeh;
        while(q)
        {
            if(p->no == q->no)
            {
                int no = p->no;
                DeleteNode(head, no);
                DeleteNode(daeh, no);
            }
            q = q->next;
        }
        p = p->next;
    }
}

int main()
{
    Node *head = NULL;
    Add(&head, 1001, 15, "男", "张1");
    Add(&head, 1008, 17, "男", "张2");
    Add(&head, 1003, 19, "男", "张3");
    Add(&head, 1004, 23, "男", "张4");

    Node *daeh = NULL;
    Add(&daeh, 1001, 15, "男", "张1");
    Add(&daeh, 1002, 17, "男", "张2");
    Add(&daeh, 1003, 19, "男", "张3");
    Add(&daeh, 1006, 23, "男", "张4");

    //易知 删除1001 1003
    DeleteTheSameNo(&head, &daeh);

    printf("head 链表:\n");
    Print(head);

    printf("daeh 链表:\n");
    Print(daeh);

    return 0;
}
