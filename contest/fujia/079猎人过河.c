/*************************************************************************
	> File Name: 079猎人过河.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月02日 星期一 17时31分39秒
 ************************************************************************/
/*
* 猎人要把一只狼一头羊和一些白菜从河的左岸带到右岸但他的船太小  一次只能带一样
* 因为狼要吃羊 羊会吃白菜 所以狼和羊 羊和白菜不能在无人监视的情况下相处 
* 问猎人怎样才能达到目的? 请编程序实现猎人过河
*
* //参考:http://blog.csdn.net/itcastcpp/article/details/17241963
* */
#include<stdio.h>
#include<unistd.h>

//*假设狼0  羊1  白菜2  

int  IsSafe(int *a)
{
    if(a[0] == 1 && a[1] == 1 || a[1] == 1 && a[2] == 1)
    {
        return 0;
    }
    else
    {
        return !0;
    }
}

//将左边的三只送到右边  送完将flag置为1 跳出递归
//move = 1 右移动   0左移动   目的:标志移动方向
//x移动的谁(ˊ狼 羊还是菜)     目的:不能来回一直送同一个物品
int flag = 0;
void Route(int *left, int *right, int move, int x)
{
    if(!move && left[3] == 3 || move && right[3] == 3)
    {
        flag = 1;
        printf("渡河结束!\n");
        return ;
    }
    else
    {
        for(int i = 0; i < 3; i++)
        {
            if(x == i)
            {
                continue;
            }
            if(left[i] == 0)
            {
                continue;
            }
            right[i]++;
            right[3]++;
            left[i]--;
            left[3]--;
            //如果送完

            if(flag == 0)
                printf("移动:%d \n", i);
            //sleep(1);
            //当送到对面, 自己这边要是安全的
            if(IsSafe(left))
            {
                if(IsSafe(right) && move)
                {
                    printf("空手而归!\n");
                    Route(left, right, move, i); //继续同方向操作
                }
                else
                {
                    Route(right, left, !move, i);
                }
            }
            else if(flag == 0)
            {
                //回退
                right[i]--;
                right[3]--;
                left[i]++;
                left[3]++;
                printf("重新移动 \n");
            }
        }
    }
}

int main()
{
    int a[4] = {1,1,1,3};
    //0 狼
    //1 羊
    //2 菜
    int b[4] = {0};

    Route(a, b, 1, -1);
    return 0;
}

