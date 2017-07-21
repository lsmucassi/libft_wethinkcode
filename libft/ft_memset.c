/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 16:26:34 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/21 10:57:05 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *dest, int c, size_t n)
{
	char	*d;
	size_t	i;

	i = 0;
	if (n)
	{
		d = dest;
		while (i < n)
		{
			((unsigned char *)dest)[i] = c;
			i++;
		}
	}
	return (dest);
}
