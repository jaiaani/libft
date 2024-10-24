/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:25:12 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/23 20:47:44 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Locate character in string
 *Returns a pointer to the first occurence of the character c in the string s.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	if (c == '\0')
		return (str + i);
	return (NULL);
}
