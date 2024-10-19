/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:05:06 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/19 02:48:25 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Parameters:
 * s: The string from which to create the substring.
 * start: The start index of the substring in the string 's'.
 * len: The maximm length of the substring
 *
 * Returns the substring; NULL is tha allocation fails
 *
 * Allocates (with malloc(3)) and returns a substring from the string 's'.
 * The substring begins at index 'start' and is of maximum size 'len'.
 */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	count;
	char	*sub;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = start;
	count = 0;
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return NULL;
	while (s[i] && count < len)
	{
		sub[count] = s[i];
		i++;
		count++;
	}
	return (sub);
}
/*
#include <stdio.h>
int main() {
    char *str = "Hey i am your substring";
    char *substr;

    substr = ft_substr(str, 5, 0);
    if (!substr) {
        printf("Allocation failed.\n");
        return 1;
    }

    printf("Substring: %s\n", substr);

    free(substr);

    return 0;
}*/
