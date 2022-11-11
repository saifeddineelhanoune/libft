/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:19:23 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/01 02:19:27 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		bytes_to_fill;

	bytes_to_fill = count * size;
	if (!count || !size)
		bytes_to_fill = 1;
	else if (bytes_to_fill / count != size)
		return (NULL);
	ptr = malloc(bytes_to_fill);
	if (ptr)
		ft_bzero(ptr, bytes_to_fill);
	return (ptr);
}
