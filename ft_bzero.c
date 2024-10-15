/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:08:21 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/14 23:04:03 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	s = (void *) str;
}

#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	buffer[] = "This a test to bzero";
	char    buffer1[] = "This a test to bzero";

	bzero(buffer, 4);
	printf("original: %s\n", buffer);
	ft_bzero(buffer1, 4);
	printf("mine: %s\n", buffer1);	
}
