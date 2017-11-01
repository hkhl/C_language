/*************************************************************************
	> File Name: 083人机博弈.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月22日 星期日 15时45分06秒
 ************************************************************************/
//83. 有15颗棋子, 你和计算机轮流取 每次1-3颗.直到取完为止 谁手中的棋子总数为奇数者赢
//先由键盘输入来确定计算机先取还是你先取
//提示:取胜秘诀: 第一次取两颗 ,以后按如下规则进行:
//1)刚取的棋子数如果和已取得的棋子数加起来是奇数, 那么剩下的棋子数必须是1或者8或者9
//2)刚取的棋子数如果和已取得的棋子数加起来是偶数, 那么剩下的棋子数必须是4或者5
//思考: n颗棋子时,程序如何修改?
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void Game(int sum, int previous);

int main()
{
    int sum = 15; //15颗子
    int previous = 0;
    printf("(1-3颗)谁先取子, 机0, 人1:");
    scanf("%d", &previous);
    
    Game(sum, previous);

    return 0;
}

void Game(int sum, int previous)
{

    static int x = 0;  //取子数
    static int sumperson = 0;
    static int sumcomputer = 0;  
    //只有1颗或者2颗3颗的特殊情况
    if(sum == 0)
    {
        printf("游戏结束\n");
        if(sumperson % 2 == 0)
            printf("机器胜利\n");
        else
            printf("玩家胜利\n");
        return ;
    }
    else
    {
        if(previous == 1)
        {
            printf("当前有%d颗棋子. 请输入取子数:", sum);
            while(1)
            {
                scanf("%d", &x);
                if(x <= 0 || x >3)
                {
                    printf("输入有误,重新输入(1-3)");
                }
                else if(x <= sum)
                {
                    break;
                }
                else
                {
                    printf("输入超出棋子个数,请重新输入\n");
                }
            }
            sumperson += x;
            Game(sum-x, 0);
        }
        else if(previous == 0)
        {
            time_t ts;
            srand((unsigned int)time(&ts));
            x = rand()%3+1;
            if(sum == 1)
            {
                x = 1;
            }
            else if(sum <= 2)
            {
                x = rand()%2+1;
            }
            sumcomputer += x;
            printf("当前有%d颗棋子. 机器取了%d颗\n", sum, x);
            Game(sum-x, 1);
        }
        else
        {
            printf("输入有误\n");
        }
    }
}

