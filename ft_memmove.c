 #include "libft.h"

 void *ft_memmove(void *dst, const void *src, size_t len)
 {
    if(dst <= src)
        dst = (unsigned char *)ft_memcpy(dst, src, len);
    else
    {
        while (len-- > 0)
            *(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
    }
    return ((void *)dst);
 }