/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:14:08 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/23 09:59:04 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Locate a substring in a string					      *	
 * Locates the first occurence of the null-terminaed string little in the     *
 * string big, where not more than len characters are searched. 	      *
 * Characters that appear after a \0 character are not searched 	      */

#include "libft.h" 

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;

	i = 0;
	b = (char *)big;
	if (little[0] == '\0')
		return (b);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && (i + j) < len && big[i + j] == little[j])
			j++;
		if (!little[j])
			return (b + i);
		i++;
	}
	return (NULL);
}
