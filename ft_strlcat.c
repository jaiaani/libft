/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:45:45 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/16 22:13:13 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* concatenate strings respectively.
 * Take the full size of the buffer (not just the length) and guarantee to 
 * NUL-terminate the result (as long as there is at least one byte free in dst)
 * BOth src and dst must be NUL-terminated */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	i = dest_len;
	j = 0;
	while (src[j] && (i < size - 1) && (size > 0))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < i)
		return (src_len + size);
	return (src_len + dest_len);
}

/*
size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	size_t	dsize;
	size_t	ssize;
	size_t	i;
	size_t	j;

	if (!dest && !length)
		return (0);
	dsize = ft_strlen(dest);
	ssize = ft_strlen(src);
	i = dsize;
	j = 0;
	while ((i < length - 1) && (src[j]) && (length > 0))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (length < i)
		return (ssize + length);
	return (ssize + dsize);
}*/
