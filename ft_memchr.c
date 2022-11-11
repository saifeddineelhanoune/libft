/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:25:29 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/01 02:25:33 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	*is_find;

	str = (unsigned char *)s;
	is_find = NULL;
	while (n > 0)
	{
		if (*str != (unsigned char)c)
			str++;
		else
		{
			is_find = str;
			break ;
		}
		n--;
	}
	return (is_find);
}
