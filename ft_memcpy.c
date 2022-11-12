/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:32:48 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/01 02:33:09 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    char *destination;
    char *source;

	destination = (char *)dst;
	source = (char *)src;
    if (((unsigned char *)dst) == NULL && ((unsigned char *)src) == NULL)
        return (0);
	if (dst == src)
		return (dst);
    while (n > 0)
    {
        *destination = *source;
        destination++;
        source++;
        n--;
    }
    return (dst);
}
