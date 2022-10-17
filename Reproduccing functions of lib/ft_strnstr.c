#include"libft.h"
// static size_t ft_strnlen(const char *s, size_t maxlen)
// {
//     size_t i = 0;
//     while(*s && i < maxlen)
//         i++;
//     return i;
// }
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    if (haystack || len)
    {
        i = 0;
        size_t l_needle = ft_strlen(needle);
        if(!(l_needle))
            return (char *)haystack;
        int mod = (int)(len - l_needle);
        while(i <= mod || !haystack)
        {
            if((*haystack == *needle) && (!ft_strncmp(haystack,needle,l_needle)))
                return (char*)haystack;
            haystack++;
            i++;
        }
    }
    return NULL;
}
