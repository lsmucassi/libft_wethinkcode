/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 14:42:53 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/21 12:21:42 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t c;
	size_t item;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && n > 0)
	{
		c = 0;
		item = i;
		while (s1[item] == s2[c] && s2[c] && s1[item])
		{
			item++;
			c++;
		}
		if (s2[c] == '\0')
			return ((char *)s1 + i);
		i++;
		n--;
	}
	return (0);
}
