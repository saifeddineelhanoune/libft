#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    if(((char*)dst) == NULL && ((char*)src) == NULL)
        return 0;
    char *destination = (char*)dst;
    char *source = (char*)src;
    while(n > 0)
    {
        *destination = *source;
        destination++;
        source++;
        n--;
    }
    return dst;
}