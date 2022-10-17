#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    //locating the first occurrence of c in the string pointed to by s
    while(*s)
    {
        if(*s == c)
        //return a pointer to the located character
            return (char*)s;
        s++;
    }
    if(*s == c)
        return (char*)s;
    //return NULL if the character does not appear in the string
    return NULL;
}