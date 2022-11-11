/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:51:53 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/01 02:57:09 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char *ft_strdup(const char *s1)
{
    size_t l_str;
    char *ptr;
	
	l_str = ft_strlen(s1) + 1;
	ptr = malloc(sizeof(char) * l_str);
	if(ptr)
		ptr = ft_memcpy(ptr, s1, l_str);
    return (ptr);
}
