/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:10:32 by sel-hano          #+#    #+#             */
/*   Updated: 2022/10/21 23:16:43 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-') && (ft_isdigit(*(char*)(str + 1))))
	{
		sign *= -1;
		str++;
	}
	else if ((*str == '+') && (ft_isdigit(*(char*)(str + 1))))
		str++;
	while (ft_isdigit(*str))
	{
		if (result > 2147483648 && sign < 0)
			return 0;
		else if (result > 2147483647)
			return -1;
		result = result * 10 + (*(str++) - 48);
	}
	return (result * sign);
}
