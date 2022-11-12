#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	countstr;
	int		i;

	countstr = ft_strlen(needle);
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	if (haystack || (!haystack && len))
	{
		while (*(haystack + i) && len)
		{
			if (*(haystack + i) == *needle && countstr <= len
				&& !ft_strncmp((haystack + i), needle, countstr))
			{
				return ((char *)(haystack + i));
			}
			i++;
			len--;
		}
	}
	return (NULL);
}
