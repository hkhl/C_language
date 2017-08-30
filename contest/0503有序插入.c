/*************************************************************************
	> File Name: 0503有序插入.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月27日 星期四 20时48分09秒
 ************************************************************************/
//有序的数组 插入一个数字后
//仍然保持有序
#include<stdio.h>
void Insert(int a[], int n, int num)
{
    int index = 0;
    /*if(num > a[n-1])
    {
        n++;
        a[n-1] = num;
    }*/

//else{
    while(index < n)
    {
        if(a[index] < num)
        {
            index++;
            continue;//若小于不执行后面的语句 执行下次循环 跳过break;
        }
        
        else
        //此时从index开始 往后移位 index放num 总数n+1;
        {
            n++;
            for(int i = n-1; i > index; i--)
            {
                a[i] = a[i-1];
            }
            a[index] = num;
        }
            break; //若第一个大于插入值的数字出现 则 移位插入后 跳出循环
    }

//}
    if(index == n)
    {
        n++;
        a[n-1] = num;
    }
    for(int i = 0; i < n; i++)
    printf("%d " , a[i]);


}
int main()
{
    int a[] = {1,3,5,7,9};
    int num = 0;

    scanf("%d", &num);
    Insert(a, 5, num);

    return 0;
}
