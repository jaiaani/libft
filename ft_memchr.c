/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:14:37 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/25 12:59:47 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Scan memory for a character.						      *
 * Scans the initial n bytes of the memory area pointed to by s for the first *
 * instance of c. Both c and the bytes of the memory area pointed to by s are *
 * interpreted as unsigned char.					      *
 * Returns a pointer to the matching byte of NULL if the character does not   *
 * occur in the given memory 						      */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
