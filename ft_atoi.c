/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 02:23:37 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/23 10:39:01 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Convert a string to an interger					      *	
 * Convertes the initial portion of the string pointed to by nptr to int.     *
 * Does not detect errors.						      */

#include "libft.h"

static int	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static int	is_signal(char c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(const char *nptr)
{
	int		x;
	int		s;
	size_t	i;

	x = 0;
	i = 0;
	s = 1;
	while (nptr[i] && is_space(nptr[i]))
		i++;
	if (nptr[i] == '-')
		s = -1;
	if (is_signal(nptr[i]))
		i++;
	while (ft_isdigit(nptr[i]))
	{
		x = x * 10 + (nptr[i] - 48);
		i++;
	}
	x *= s;
	return (x);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("mine: %d\n", ft_atoi(argv[1]));
		printf("original: %d\n", atoi(argv[1]));
	}
}*/
