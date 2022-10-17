#include "libft.h"
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = (unsigned char*)b;
    while (len > 0)
    {
        *ptr = c;
        ptr++;
        len--;
    }
    return b;
}
