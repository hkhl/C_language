/*************************************************************************
	> File Name: 013strstr.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月08日 星期五 23时52分39秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void * mystrstr(char *dest, char *src)
{
    if(dest == NULL || src == NULL)
    {
        return NULL;
    }

    int len = strlen(src);
    int flag = 1;
    while(*dest)
    {
        char *p = dest;
        if(*dest == *src)
        {
            for(int i = 0; i < len; i++)
            {
                if(p[i] != src[i])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1)
        {
            return dest+len;
        }
        dest++;
    }
    return NULL;
}

int main()
{
    char a[20] = "my namy is wangdong";
    char b[20] = "dong"; 

    char *p = strstr(a, b);
    printf("%s", p);

    return 0;
}
