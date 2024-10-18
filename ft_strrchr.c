/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:44:43 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/16 22:57:28 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* String scanning operation
 * Shall locate the last occurence of c in the string pointed to by s.
 * The terminating NUL character is considered to be part od the string.*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	size_t	i;

	chr = (char)c;
	i = ft_strlen(s) + 1;
	while (i >= 0)
	{
		if (s[i] == chr)
			return ((char *)s + i);
		i--;
	}
	return NULL;
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[] = "banana";

	printf("mine: %s\n", ft_strrchr(a, 'n'));
	printf("original: %s\n", strrchr(a, 'n'));
}
