/************************************************************************
	> File Name: 1.c
	> Author: wang
	> Mail: dhkhl235@gmail.com
	> Created Time: 2018年03月15日 星期四 22时14分26秒
 ************************************************************************/

/* malloc申请空间实际分配? */

#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <unistd.h>

int main(int argc, char * argv[])
{
    printf("int 长度为　：%ld\n", sizeof(int));
    int *a, b = 1;
    int nbytes;
    a = (int *)malloc(0);  //64bit  第一次最小分配24字节
    nbytes = malloc_usable_size(a);
    printf("动态内存存的长度为：%d\n", nbytes);
    printf("a的长度:%ld\n", sizeof(a));
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 4;
    a[5] = 5;
    //a[6] = 6;     //当超出分配的空间,程序崩溃(必须由free,最后设置NULL)
    printf("b = %d\n", b);
    printf("a = %d\n", *a);
    printf("指针地址：b - %p\n", &b);
    printf("释放前，指针地址：a - %p\n", a);
    free(a);
    a = NULL;
    printf("释放后，指针地址：a - %p\n", a);
    if(a != NULL)
    printf("a = %d\n", *a);
    else
    printf("a is NULL, %p \n", a);



    return 0;
}
