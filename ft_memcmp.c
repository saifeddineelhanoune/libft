/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:29:22 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/01 02:29:31 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int				cmp;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	cmp = 0;
	while (n > 0)
	{
		if (*p1 != *p2)
		{
			cmp = *p1 - *p2;
			break ;
		}
		p1++;
		p2++;
		n--;
	}
	return (cmp);
}
