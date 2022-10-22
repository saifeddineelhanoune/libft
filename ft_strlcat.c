#include"libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t strlen;
	
	if(dstsize)
		strlen = ft_strlen(dst);
	if(dst && dstsize)
	{
		if(dstsize > strlen)
			return (strlen + ft_strlcpy(dst + strlen,src,dstsize - strlen));
	}
	return (dstsize + ft_strlen(src));
}
