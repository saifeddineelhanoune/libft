/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:48:36 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/01 02:49:28 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char 	*ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == (unsigned char)c)
            return ((char *)s);
        s++;
    }
    if(*s == (unsigned char)c)
        return ((char *)s);
    return (NULL);
}
