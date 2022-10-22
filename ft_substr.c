#include"libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    if (!s)
        return NULL;
    if(start >= ft_strlen(s))
    {
        sub = malloc(sizeof(char));
        sub[0] = 0;
        return sub;
    }
    sub = malloc(sizeof(char) * (len+1));
    if(start < 0 || !sub)
        return 0;
    ft_memcpy(sub, &s[start], len);
    sub[len] = '\0';
    return sub;
}
