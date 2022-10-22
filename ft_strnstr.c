#include"libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    if (haystack || len)
    {
        i = 0;
        size_t l_needle = ft_strlen(needle);
        if(!(l_needle))
            return (char *)haystack;
		/*if(len > l_needle)
			size_t res = (len - l_needle);*/
        while(i <= len || !haystack)
        {
            if((*haystack == *needle) && (!ft_strncmp(haystack,needle,l_needle)))
                return (char*)haystack;
            haystack++;
            i++;
        }
    }
    return NULL;
}
