/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 11:28:45 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/25 13:53:08 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nword(const char *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (*s)
	{
		if (word == 0 && *s != c)
		{
			word = 1;
			i++;
		}
		else if (word == 1 && *s == c)
			word = 0;
		s++;
	}
	return (i);
}

static int ft_wordlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char **arr;
	int nword;
	int i;

	i = 0;
	nword = ft_nword(s, c);
	arr = (char **)malloc(sizeof(char *) * (nword + 1));
	if (!arr)
		return (NULL);
	while (nword--)
	{
		while (*s && *s == c)
			s++;
		arr[i] = ft_strsub(s, 0, ft_wordlen(s, c));
		if (!arr[i])
			return (NULL);
		s = s + ft_wordlen(s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
