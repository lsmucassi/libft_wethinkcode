/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 14:13:46 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/31 16:57:58 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char a;

	a = c;
	while (*s != a)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return (char *)s;
}