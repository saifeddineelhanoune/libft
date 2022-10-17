#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    //catching null errors
    if(((char*)dst) == NULL && ((char*)src) == NULL)
        return 0;
    //type casting from void* to char*
    char *destination = (char*)dst;
    char *source = (char*)src;
    //copying n bytes from memory area src to memory area dst
    while(n > 0)
    {
        *destination = *source;
        destination++;
        source++;
        n--;
    }
    return dst;
}