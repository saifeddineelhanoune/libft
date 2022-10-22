#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
    void	*ptr;
	int	bytes_to_fill;

	bytes_to_fill = count * size;
    ptr = malloc(bytes_to_fill);
    if(!ptr)
        return NULL;
    ft_bzero(ptr,bytes_to_fill);
    return ptr;
}