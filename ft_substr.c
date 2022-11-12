#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	length;
	size_t	i;

	length = ft_strlen(s);
	i = 0;
	if (s)
	{
		if (start > length)
			length = 0;
		if (len > length && len)
			len = length;
		if (length <= start + len && len)
			len = length - start;
		sub = (char *)malloc((len + 1) * sizeof(char));
		if (sub)
		{
			while (i < len)
				sub[i++] = s[start++];
			sub[i] = '\0';
		}
		return (sub);
	}
	return (NULL);
}
