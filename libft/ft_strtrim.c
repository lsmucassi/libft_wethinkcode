/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 11:09:52 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/24 11:27:37 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	let;
	size_t	ret;
	size_t	i;

	i = 0;
	let = 0;
	ret = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[ret])
	{
		if (s[ret] != ' '  && s[ret] != '\t' s[ret] != '\n')
		{
			ret++;
			let = ret;
		}
		else
			ret++;
	}
	if (s && ret == 0)
			return (ft_strdup(""));
	return (ft_strdup(s, i, (let - i)));
}
