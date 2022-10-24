#include "libft.h"
static int	ft_is_trimmed(char *str, char trim)
{
	while(*str)
	{
		if(*str == trim)
			return 1;
		str++;
	}
	return 0;
}
char *ft_strtrim(char const *s1, char const *set)
{
	if(!s1)
		return NULL;
	int	front;
	int i;
	char *str;
	int back;

	front = 0;
	i = 0;
	back = ft_strlen(s1) - 1;
	while (s1[front] && ft_is_trimmed((char*)set, (char)s1[front]))
		front++;
	while(back > front && ft_is_trimmed((char*)set, (char)s1[back]))
		back--;
	str = (char*)malloc((back - front + 2) * sizeof(char));
	if(!str)
		return NULL;
	while(front <= back)
	{
		str[i] = s1[front];
		front++;
		i++;
	}
	str[i] = '\0';
	return str;
}