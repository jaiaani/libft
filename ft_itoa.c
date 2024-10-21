/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:46:17 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/20 21:48:29 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Allocates with mallloc() and returns a string represenyting the integer
 * received as an argument. Negative numbers must be handled
 * Paramenters:
 * n: the number to convert*/
#include "libft.h"

int	number_length(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i = 1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*a;
	int	i;
	int	n_len;
	int	b;

	if (n == -2147483648)
        	return (ft_strdup("-2147483648"));
	b = 0;
	n_len = number_length(n);
	a = (char *)malloc((n_len + 1) * sizeof(char));
	if (!a)
		return (NULL);
	i = n_len - 1;
	if (n < 0)
	{
		a[0] = '-';
		n *= -1;
		b = 1;
	}
	while (i >= b)
	{
		a[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	a[n_len] = '\0';
	return (a);
}


int	main(void)
{
	printf("number len: %d\n", number_length(100));
	printf("string: %s\n", ft_itoa(-1));
}*/
