/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:37:23 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/01 02:37:31 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;

	ptr = (unsigned char *)b;
    while (len > 0)
    {
        *ptr = c;
        ptr++;
        len--;
    }
    return (b);
}
