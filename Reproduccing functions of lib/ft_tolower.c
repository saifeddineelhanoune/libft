#include"libft.h"
static int is_range(char c,int it1,int it2)
{
    if (c >= it1 && c <= it2)
        return 1;
    return 0;
}
int ft_tolower(int c)
{
    if(is_range(c,'A','Z'))
        c += 32;
    return c;
}