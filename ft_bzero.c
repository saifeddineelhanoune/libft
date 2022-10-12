#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    //cast from void* to char*
    char *ptr = (char*)s;
    //fill write n zeroed bytes to the string s
    while(n > 0)
    {
        *ptr = '\0';
        ptr++;
        n--;
    }
}