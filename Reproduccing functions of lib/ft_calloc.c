#include"libft.h"
void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    ptr = malloc(count * size);
    if(!ptr)
        return NULL;
    // while(*(char *)ptr)
    // {
    //     *(char *)ptr = '\0';
    //     i++;
    // }
    ft_bzero(ptr,count);
    return ptr;
}