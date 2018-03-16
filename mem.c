/*************************************************************************
	> File Name: memcpy.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月06日 星期六 22时31分04秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <assert.h>

/* memcpy 以及 mcmmove 函数编写以及测试 */


void *my_memmove(void *Des, void *Src, size_t n);
void *my_memcpy(void *Des, const void *Src, size_t n);

int main()
{
    char a[] = "1234567";
    char *src = a;
    char *dst = a+2;

    /*   内存覆盖情形1  */
    //memcpy(dst, src, 5);       //正确  被优化
    //memmove(dst, src, 5);      //正确
    //my_memcpy(dst, src, 5);    //错误
    //my_memmove(dst, src, 5);   //正确

    //printf("src = %s\n", src);
    //printf("dst = %s\n", dst);  //要求dst结果是12345. dst应该为 从src复制的5个元素(12345) 但结果却是12121
                                  //使用memmove()和my_memmove()以及库函数memcpy()得到正确结果,可见库函数对memcpy进行了优化

/*
 * 从实现中可以看出memcpy()是从内存左侧一个字节一个字节地将src中的内容拷贝到dest的内存中，
 * 这种实现方式导致了对于第一种内存重叠情形下，
 * dst最后几个字节的拷贝值明显不是原先的值了(不是取原先src中的值了)，
 * 新的值是变成了src的最开始的几个字节了。
 * 而对于第二种内存覆盖情况，memcpy的这种拷贝方式是可以的。
 */


    /*   内存覆盖情形2  */
    char b[] = "1234567";
    char *src1 = b + 2;
    char *dst1 = b;
    //my_memcpy(dst1, src1, 5);    //正确
    //my_memmove(dst1, src1, 5);   //正确
    //memcpy(dst1, src1, 5);       //正确
    //memmove(dst1, src1, 5);      //正确           也说明了my_memcpy 和 my_memmove编写无误

    printf("src = %s\n", src1);
    printf("dst = %s\n", dst1);  

    return 0;
}


void * my_memcpy(void *Des, const void *Src, size_t n)
{

    char *d = (char *)Des;
    const char *s = (char *)Src;
    
    if( NULL == Des && NULL == Src && n == 0)
    {
        return NULL;
    }
    //如果内存没有重叠
    while(n--)
    {
        *d++ = *s++;
    }
    return Des;
}

void *my_memmove(void *Des, void *Src, size_t n)
{
    assert(NULL != Des && NULL != Src && n != 0);
    //char *ret = (char *)Des;
    char *src_t = (char *)Src;
    char *des_t = (char *) Des;
    
    if((des_t <= src_t) || ((src_t + n) <= des_t)) //如果原地址在目的地址右侧 
    {                                              //或者目的地址加长度小于原地址
        while(n--)                                 //地址不重合
        {
            *des_t++ = *src_t++;
        }
    }
    else                           //地址重叠 高地址赋值
    {
        des_t += n - 1;
        src_t += n - 1;
        while(n--)
        {
            *des_t-- = *src_t--;
        }
    }
    return Des;
}
