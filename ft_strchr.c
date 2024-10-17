/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:25:12 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/16 22:43:36 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Locate character in string
 * Returns a pointer to the first occurence of the character c in the string s.
 */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return NULL;
}

