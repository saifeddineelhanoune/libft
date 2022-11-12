#include"libft.h"

static int	ft_rows_count(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if ((*s != c) && (*(s + 1) == c || !*(s + 1)))
			count++;
		s++;
	}
	return (count);
}

static char	*ft_strtoken(char *s, char c)
{
	static char	*buffer;
	char		*token;

	if (!buffer)
		buffer = s;
	if (!*buffer)
		return (NULL);
	token = buffer;
	while (*buffer && *buffer != c)
		buffer++;
	while (*buffer && *buffer == c)
	{
		*buffer = '\0';
		buffer++;
	}
	return (token);
}

static void	ft_memclear(char **strs, int last)
{
	int	i;

	i = 0;
	while (i < last)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	strs = NULL;
}


char	**ft_split(char const *s, char c)
{
	char	*token;
	char	**ptr;
	int		rows_count;
	int		i;

	rows_count = ft_rows_count((char *)s, c);
	while (*s == c && *s)
		s++;
	token = ft_strtoken(ft_strdup(s), c);
	ptr = malloc((rows_count + 1) * sizeof(char *));
	if (!ptr)
		return (free(ptr), NULL);
	i = 0;
	while (token)
	{
		ptr[i] = malloc((ft_strlen(token) + 1) * sizeof(char));
		if (!ptr[i])
			return (ft_memclear(ptr, i), NULL);
		ft_strlcpy(ptr[i], token, ft_strlen(token) + 1);
		token = ft_strtoken(NULL, c);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

// int main()
// {
// 	char *str = "he lo wo rld";
// 	int i = 0;

// 	char **sp = ft_split(str, ' ');
// 	while (sp[i])
// 	{
// 		printf("%s\n", sp[i]);
// 		i++;
// 	}
// 	return 0;
// }