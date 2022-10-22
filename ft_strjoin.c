#include"libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{   
    if(!s1 || !s2)
        return NULL;
    char *new_str;
    int size1 = ft_strlen(s1);
    int size2 = ft_strlen(s2);
    int size = size1 + size2; 
    new_str = malloc(sizeof(char) * (size + 1));
    if(!new_str)
        return NULL;
    ft_memcpy(new_str, s1, size1);
    ft_memcpy(new_str + size1, s2, size2);
    new_str[size] = '\0';
    return new_str;
}