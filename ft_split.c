#include"libft.h"
static int ft_word_count(const char *s, int c)
{
	int count;

	count  = 0;
	while(*s)
	{
		if(*s != c && (*(s + 1) == c || !*(s + 1)))
			count++;
		s++;
	}
	return count;	
}
static char **ft_allocation(char **ptr,char *src)
{
	int rows;
	int cols;
	int i;

	rows = ft_word_count(src);
	cols = ft_strlen((char*)src);
	ptr = (char**)malloc(sizeof(char) * rows);
	i = 0;
	while (i < rows)
	{
		ptr[i] = (char *)malloc(cols * sizeof(char));
		i++;
	}
	i = 0;
	while(ptr[i])
}
static char *ft_skip(char *str, char c)
{
	while(*str == c)
		str++;
	return str;
}