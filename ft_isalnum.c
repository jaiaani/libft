/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:52:52 by jados-sa          #+#    #+#             */
/*   Updated: 2024/09/25 18:57:53 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalpha(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

static int	ft_isdigit(char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", isalnum('1'));
	printf("%d\n", ft_isalnum('a'));
        printf("%d\n", isalnum('a'));
	printf("%d\n", ft_isalnum(';'));
        printf("%d\n", isalnum(';'));

}*/
