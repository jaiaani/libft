/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:05:38 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/23 09:13:05 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new string, which is the result    *	
 * of the concatenation of 's1' and 's2'.				      *	
 * 	s1: The prefix string.						      *	
 * 	s2: The suffix string.						      *
 * Returns the new string. NULL if the allocaion fails.			      */	

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(sizeof(char) * total_len + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, ft_strlen(s1) + 1);
	ft_strlcat(join, s2, total_len + 1);
	return (join);
}
/*
#include <stdio.h> 

int	main(void)
{
	printf("%s", ft_strjoin("join me ", "please"));	

}
*/
