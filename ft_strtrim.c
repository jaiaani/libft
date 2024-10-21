/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 03:49:54 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/20 16:47:26 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Allocates with malloc() and returns a copy of 's1' with the characters 
 * specified in 'set' removed from the beginning and the end of the string */ 

#include "libft.h"
#include <stdio.h>

static int	is_set(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	b;
	size_t	e;
	size_t	qnty;
	size_t	len;

	b = 0;
	len = ft_strlen(s1);
	e = ft_strlen(s1) - 1;
	while (is_set(set, s1[b]))
		b++;
	while (is_set(set, s1[e]))
		e--;
	qnty = e - b + 1; 
	printf("b: %zu\ne: %zu\nqty: %zu\nlen: %zu\n", b, e, qnty, len);
	return (ft_substr(s1, b, qnty));
}
/*
int	main(void)
{
	printf("is set? %d\n", is_set("abc", 'H'));
	printf("%s", ft_strtrim("abcbbcaHelloabcbca", "abc"));	
}*/
