/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 10:36:38 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/25 15:11:21 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char *str;

	str = NULL;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (str)
	{
		while (start--)
			str++;
		ft_strncpy(str, s, len);
		str[len] = '\0';
	}
	return (str);
}
