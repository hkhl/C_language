/*************************************************************************
	> File Name: 069学生链表.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月28日 星期四 22时47分41秒
 ************************************************************************/
/*
*建立一个链表每个结点包括学号、姓名、性别、年龄。
*输入一个年龄如果链表中的结点所包含的年龄等于此年龄将此结点删除输出最后的链表。
* */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

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

//年龄等于age的成员删除
void DeleteNode(Node **head, int age)
{
    Node *p1, *p2;
    p1 = p2 = NULL;

    p1 = *head;
    while(p1)   //遍历节点 找到节点
    {
        if(p1->age == age)
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
   /*if(head!= NULL)
    {
        Node *p1 = *head;
        Node *p2 = p1->next;
        //如果删除的是首位元素
        if((*head)->age == age)
        {
            *head = (*head)->next;
            free(p1);
            return;
        }
        else   //删除的不是首个元素
        {
            while(p2 != NULL)
            {
                if(p2->age == age)
                {
                    p1->next = p2->next;
                    free(p2);
                    return;
                }
                p1 = p2;
                p2 = p1->next;
            }
        }
    }
    else
    {
        printf("空链表\n");
    }*/
    
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

int main()
{
    Node *head = NULL;
    Add(&head, 1001, 15, "男", "张1");
    Add(&head, 1002, 17, "男", "张2");
    Add(&head, 1003, 19, "男", "张3");
    Add(&head, 1004, 23, "男", "张4");
    //Add(&head, 1005, 22, "男", "张5");
    DeleteNode(&head, 17);
    Print(head);

    printf("反转后的链表:\n");
    LinkRev(&head);
    Print(head);


    printf("删除后的链表:\n");
    FreeAll(&head);
    Print(head);


    return 0;
}
