/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_putchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 15:33:10 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/21 15:58:39 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main ()
{
	char ch;

	for(ch = 'A' ; ch <= 'Z' ; ch++) 
	{
		ft_putchar(ch);
	}

	return(0);
}
