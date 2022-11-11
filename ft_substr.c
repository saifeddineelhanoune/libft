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
    sub = (char *)malloc(sizeof(char) * len + 1);
    if(start < 0)
        return (NULL);
	if(sub)
	{
		ft_memmove(sub, &s[start], len);
		sub[len] = '\0';
    	return (sub);
	}
	return (NULL);
}
