#include"libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    //catching null errors
    if((char*)s == NULL)
        return 0;
    //type casting from const void* to unsigned char *
    unsigned char *str = (unsigned char*)s;
    //init the pointer to the found adress 
    unsigned char *is_find = NULL;

    while(*str && n > 0)
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