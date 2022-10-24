/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:26:50 by sel-hano          #+#    #+#             */
/*   Updated: 2022/10/22 19:27:04 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_fill(char *dst, int nb, int len)
{
	unsigned int	n;

	if (nb < 0)
		n = nb * -1;
	else
		n = nb;
	dst[len] = '\0';
	while (n != 0 || len == 1)
	{
		dst[--len] = (char)(n % 10 + 48);
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		s;
	int		len;
	char	*output;

	s = 0;
	if (n < 0)
		s++;
	len = ft_nbrlen(n) + s;
	if (!len)
		len++;
	output = (char *) malloc(len * sizeof(char) + 1);
	if (output)
	{
		ft_fill(output, n, len);
		if (s)
			output[0] = '-';
		return (output);
	}
	return (NULL);
}
