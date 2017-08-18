/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 10:14:03 by lmucassi          #+#    #+#             */
/*   Updated: 2017/08/18 12:58:11 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	
	if (!s)
		return (NULL);
	else
	{
		str = ft_strdup(s);
		if (!str)
			return (NULL);
		else
		{
			i = 0;
			while (s[i] != '\0')
			{
				str[i] = f(i, s[i]);
				i++;
			}
		}
	}
	return (str);
}
