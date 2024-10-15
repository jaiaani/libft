/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 00:06:39 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/15 00:49:56 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//test all functions
//
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("\n--- ft_isalpha ---\n");
	printf("Should return 1 when char is alphabetic");
	printf("\nResult: %d\n", ft_isalpha('a'));
	printf("Should return 0 when char is not alphabetic");
	printf("\nResult: %d\n", ft_isalpha('1'));
	printf("------------------\n");

	printf("\n--- ft_isdigit ---\n");
        printf("Should return 1 when 0 >= char <= 9");
        printf("\nResult: %d\n", ft_isdigit('2'));
        printf("Should return 0 when != #{0...9}");
        printf("\nResult: %d\n", ft_isdigit('a'));
        printf("------------------\n");

	printf("\n--- ft_isalnum ---\n");
        printf("Should return 1 when char is alphanumeric");
        printf("\nResult: %d\n", ft_isalnum('2'));
        printf("Should return 0 when char is not alphanumeric");
        printf("\nResult: %d\n", ft_isalnum('\n'));
        printf("------------------\n");

	printf("\n--- ft_isascii ---\n");
        int ch;
	for (ch = 0x7c; ch <= 0x82; ch++)
	{
		printf("%#04x    ", ch);
	       	if (ft_isascii(ch))
			printf("The character is %c\n", ch);
		else
			printf("Cannot be represented by an ASCII character\n");
	}
        printf("-----------------\n");


	return(0);
}
