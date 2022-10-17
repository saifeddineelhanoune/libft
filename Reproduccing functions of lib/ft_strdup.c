#include"libft.h"
char *ft_strdup(const char *s1)
{
   
    size_t l_str = ft_strlen(s1);
    char *ptr = malloc(sizeof(char) * l_str);
    return ptr;
}