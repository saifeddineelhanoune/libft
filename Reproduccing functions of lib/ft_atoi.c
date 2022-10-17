#include"libft.h"
int ft_atoi(const char *str)
{
    size_t result = 0;
    size_t sign = 1;
    while(*(char*)str == 32 || (*(char*)str >= 9 && *(char*)str <= 13))
        str++;
    if(*str == '-')
    {
        sign *= -1;
        str++;
    }
    if(*str == '+')
        str++;
    while(ft_isdigit(*str))
        result = result * 10 + (*(str++) - 48);
    return result * sign;
}
