#include"libft.h"

static int ft_nbrlen(int c)
{
    int    i;

    i = 0;
    if (c < 10 && c >= 0)
        i++;
    while (c)
    {
        c /= 10;
        i++;
    }
    return (i);
}

static char *ft_nbrfill(char *dst, unsigned int n, int len)
{
    *(dst + len) = '\0';
    len--;
    while (n >= 0 && len >= 0)
    {
        *(dst + len) = (n % 10) + 48;
        n /= 10;
        len--;
    }
    if (len == 0)
        *(dst + len) = '-';
    return (dst);
}

char *ft_itoa(int n)
{
    char *result;
    int nbrl;

    nbrl = ft_nbrlen(n);
    if (n < 0)
        nbrl++;
    result = (char *)malloc(sizeof(char) * (nbrl + 1));
    if (result)
    {
        result = ft_nbrfill(result, n, nbrl);
    }
    return (result);
}