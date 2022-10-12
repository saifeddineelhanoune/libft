#include "libft.h"
static char *ft_get_last_adress(const char *str)
{
    while(*str)
        str++;
    return (char*)str - 1;
}
 char *ft_strrchr(const char *s, int c)
 {
    // getting last adress of the string 
    char *str = ft_get_last_adress((char*)s);
    //locates the last occurrence of c in the string pointed to by s
    while(*str)
    {
        if(*str == c)
            return (char*)str;
        str--;
    }
    return NULL;
 }








