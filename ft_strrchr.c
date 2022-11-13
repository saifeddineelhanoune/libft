/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:01:57 by sel-hano          #+#    #+#             */
/*   Updated: 2022/11/13 20:02:05 by sel-hano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	l_str;

	l_str = ft_strlen(s);
	while (l_str > 0)
	{
		if ((unsigned char)s[l_str] == (unsigned char)c)
			return ((char *)&s[l_str]);
		l_str--;
	}
	if ((unsigned char)s[l_str] == (unsigned char)c)
		return ((char *)&s[l_str]);
	return (NULL);
}
