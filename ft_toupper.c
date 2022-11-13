/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:04:22 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/13 20:04:28 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	is_range(char c, int it1, int it2)
{
	if (c >= it1 && c <= it2)
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (is_range(c, 'a', 'z'))
		c -= 32;
	return (c);
}
