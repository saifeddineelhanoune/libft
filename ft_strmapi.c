#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				count;
	char			*ptr;
	unsigned int	i;

	if (s)
	{
		count = ft_strlen(s);
		i = 0;
		ptr = (char *)malloc(sizeof(char) * (count + 1));
		if (ptr)
		{
			while (*s)
			{
				ptr[i] = f(i, *s);
				i++;
				s++;
			}
			ptr[i] = '\0';
			return (ptr);
		}
	}
	return (NULL);
}
