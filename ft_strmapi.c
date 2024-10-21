/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:49:10 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/20 22:21:50 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Applies the function f to each character of th string s, passing its index 
 * as the first arguument and the character itself as the seconf.
 * A new string is created using malloc to collect the results from the 
 * successive applications of f. 
 * Parameters: 
 * s: The string on which to iteate
 * f: The function to apply each character */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	codify(unsigned int i, char c)
{
	c -= 32;
	return c;
}

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strmapi("tarara", &codify));
}*/
