#include"libft.h"
static int is_range(char c,int it1,int it2)
{
    if (c >= it1 && c <= it2)
        return 1;
    return 0;
}
int ft_toupper(int c)
{
    if(is_range(c,'a','z'))
        c -= 32;
    return c;
}