/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tester.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 13:27:10 by lmucassi          #+#    #+#             */
/*   Updated: 2017/06/07 17:52:39 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"



int main()
{
	char src[20];
	char dst[20];

	memset(dst, '\0', sizeof(dst));
	strcpy(src, "This is the string.");
	ft_strncpy(dst, src, 2);

	printf("Final copied string: %s\n", dst);

	return(0);
}

