#include"libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str = (unsigned char*)s;
    unsigned char *is_find = NULL;
    while(n > 0)
    {
        if( *str != (unsigned char)c )
            str++;
        else
        {
            is_find = str;
            break;
        }
        n--;
    }
    return is_find;
}