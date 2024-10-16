/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:01:44 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/16 00:41:18 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copy strings. Take the full size of the buffer (not just the length) and 
 * guarantee to NUL-terminate the result (as long as size is larger than 0)
 * Note that a byte for the NUL shoud be included in size. 
 * Only operate on true 'C' strings, so the src must be NUL-terminated        */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_l;

	i = 0;
	src_l = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_l);
}
