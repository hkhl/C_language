/*************************************************************************
	> File Name: 0519次大值.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月30日 星期日 15时15分15秒
 ************************************************************************/
//求N个数中的最大值 以及最大值出现的次数 （最大值有很多）
//再求出次大值（次大值一定存在）

/*思路 针对最大值只有一个的情况
 * 1.最low 找出最大 删除最大 数组移位 再找最大为次大
 * 2.找出最大 存起来 数组中的置最小 再找最大为次大   
 * 3.排序找第二个位置
 * 4.再用一个数组 最大存第一位值 次大存第二位值*/


//本题做法（缺点：改变可数组原来的值，也可引用数组存原数组的值）
/* 若最大值有多个
 * 找出最大值 遍历数组凡是最大值全置最小 再找最大值为次大值*/


#include<stdio.h>
#include<limits.h>
void Find(int a[], int len)
{
    int min = INT_MIN;
    int max = 0;
    int temp = 0;
    int count  = 0;
    a[max] = a[0];
    for(int i = 0; i < len; i++)//找其中一个最大值
    {
        if(a[i] > a[max])
        {
            max = i;
        }
    }
    temp = a[max];
    //遍历数组 凡是最大值 置最小
    for(int i = 0; i < len; i++)
    {

        if(a[i] == temp)
        {
            a[i] = min;
            count++;
        }
    }
    
    //再找最大值
    a[max] = a[0];
    for(int i = 0; i < len; i++)
    {
        if(a[i] > a[max])
        {
            max = i;
        }
    }
    printf("最大值：%d， 出现次数：%d\n", temp, count);
    printf("次大值：%d",a[max]);

}
int main()
{
    int a[] = {6,6,6,1,2,6,6,6,3,6,6,4,5,6,6,6,6};
    int len = sizeof(a) / sizeof(int);

    Find(a, len);


    return 0;
}
