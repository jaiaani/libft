/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:04:27 by jados-sa          #+#    #+#             */
/*   Updated: 2024/09/25 19:08:08 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(char c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", isprint('\n'));
	printf("%d\n", ft_isprint('2'));
        printf("%d\n", isprint('2'));
        return (0);
}*/
