/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 14:42:00 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/31 17:37:54 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 || s2 || n)
	{
		while (n > 0)
		{
			if (*s1 != *s2)
			{
				if ((unsigned char)*s1 > (unsigned char)*s2)
					return (1);
				else
					return (-1);
			}
			if (*s1 == '\0')
				return (0);
			n--;
			s1++;
			s2++;
		}
	}
	return (0);
}
