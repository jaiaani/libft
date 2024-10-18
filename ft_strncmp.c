/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:57:51 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/17 20:00:52 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Compares two strings. 

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while((s1[i] || s2[i]) && n > 0)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
		n--;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("mine: %i\n", ft_strncmp("ABC", "ABA", 2));
	printf("original: %i\n", strncmp("ABC", "ABA", 2));
	printf("mine: %i\n", ft_strncmp("ABC", "ABA", 4));
	printf("original: %i\n", strncmp("ABC", "ABA", 4));


}
