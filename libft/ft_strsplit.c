/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:40:34 by lmucassi          #+#    #+#             */
/*   Updated: 2017/08/07 14:15:01 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_getwordsnb(char const *s, char c)
{
	unsigned int	nb;
	size_t			i;

	i = 0;
	nb = 0;
	while (s && s[i])
	{
		while ((char)s[i] == c)
			i++;
		if (s[i] && (char)s[i] != c)
			nb++;
		while (s[i] && (char)s[i] != c)
			i++;
	}
	return (nb);
}

char				**ft_strsplit(char const *s, char c)
{
	char			*t;
	char			**splited;
	size_t			k;

	splited = (char**)malloc((ft_getwordsnb(s, c) + 1) * sizeof(char*));
	t = ft_strdup(s);
	k = 0;
	if (!s || !c || !splited)
		return (NULL);
	else
	{
		while (t && *t)
		{
			while (*t == c)
			{
				*t = 0;
				t++;
			}
			if (*t && *t != c)
			{
				splited[k] = t;
				k++;
			}
			while (*t && *t != c)
				t++;
		}
	}
//	splited[k] = 0;
	return (splited);
}
