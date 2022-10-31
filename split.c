#include<stdio.h>
#include<stdlib.h>
#include<string.h>
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    i;
    size_t    length;

    length = strlen(src);
    i = 0;
    if (dstsize != 0)
    {
        while (src [i] && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (length);
}
static int ft_rows_count(char *s,char c)
{
    int count = 0;
    while(*s || *s == '\0')
    {
        if(*s != c && *(s + 1) == c || *s == '\0')
            count++;
        if(*s == '\0')
          break;
        s++;
    }
    
    return count;
}
static char *ft_strtoken(char *s, char c)
{
    static char *buffer;
    char *token;
    if(!buffer)
        buffer = s;
    if(!*buffer)
        return NULL;
    token = buffer;
    while(*buffer && *buffer != c)
        buffer++;
    if(*buffer)
    {
        *buffer = '\0';
        buffer++;
    }
    return token;
}
int main()
{
    char str[] = "this1is1a1test";
    char *token;
    int rows_count = ft_rows_count(str,'1');
    token = ft_strtoken(str,'1');
    char **ptr;
    ptr = malloc((rows_count + 1) * sizeof(char *));
    int i = 0;
    while(token)
    {
        ptr[i] = malloc(strlen(token) * sizeof(char) + 1);
        ft_strlcpy(ptr[i], token, strlen(token) + 1);
         token = ft_strtoken(NULL,'1');
        i++;
    }
    ptr[i] = NULL;
    
    return 0;
}
