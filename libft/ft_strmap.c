/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 09:58:06 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/24 10:13:26 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strmap(char const *s, char (*f)(char));
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	str = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str)
	{
		while (s[i] != '\0');
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
