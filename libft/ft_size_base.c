
/*                                                        :::      ::::::::   */
/*   ft_size_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:56:59 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/25 13:57:08 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size_base(int c, int base)
{
	int i;

	i = 1;
	if (c < 0)
		c = -c;
	while (c >= base)
	{
		c /= base;
		i++;
	}
	return (i);
}
