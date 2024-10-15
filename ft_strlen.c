/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:08:37 by jados-sa          #+#    #+#             */
/*   Updated: 2024/09/25 19:16:35 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%lu\n", ft_strlen("hii"));
	printf("%lu\n", strlen("hii"));
	printf("%lu\n", ft_strlen(""));
        printf("%lu\n", strlen(""));
	return (0);
}*/
