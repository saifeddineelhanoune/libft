#include"libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{ 
    unsigned char *p1 = (unsigned char*)s1;
    unsigned char *p2 = (unsigned char*)s2; 
    int rtn_cmp = 0;
    while(n > 0)
    {
        if(*p1 != *p2)
        {
            rtn_cmp = *p1 - *p2;
            break;
        }
        p1++;
        p2++;
        n--;
    }
    return rtn_cmp;
}