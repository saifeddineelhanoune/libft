#include"libft.h"
char *ft_strdup(const char *s1)
{
    size_t l_str = ft_strlen(s1) + 1;
    char *ptr = malloc(sizeof(char) * l_str);
	if(ptr)
		ptr = ft_memcpy(ptr, s1, l_str);
    return ptr;
}