#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    size_t l_str = ft_strlen(s);
    while(l_str >= 0)
    {
        if(*(unsigned char*)(s+l_str) == c)
            return (char*)(s+l_str);
        l_str--;
    }
    return NULL;
}









