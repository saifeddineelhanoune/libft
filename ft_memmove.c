/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:35:49 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/01 02:35:53 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

 void	*ft_memmove(void *dst, const void *src, size_t len)
 {
    if (dst <= src)
        dst = (unsigned char *)ft_memcpy(dst, src, len);
    else
    {
        while (len-- > 0)
            *(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
    }
    return ((void *)dst);
 }
