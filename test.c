/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 00:06:39 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/15 20:04:31 by jados-sa         ###   ########.fr       */
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
	printf("\nChar: a\nResult: %d\n", ft_isalpha('a'));
	printf("Should return 0 when char is not alphabetic");
	printf("\nChar: 1\nResult: %d\n", ft_isalpha('1'));
	printf("------------------\n");

	printf("\n--- ft_isdigit ---\n");
        printf("Should return 1 when 0 >= char <= 9");
        printf("\nChar: 2\nResult: %d\n", ft_isdigit('2'));
        printf("Should return 0 when != #{0...9}");
        printf("\nChar: a\nResult: %d\n", ft_isdigit('a'));
        printf("------------------\n");

	printf("\n--- ft_isalnum ---\n");
        printf("Should return 1 when char is alphanumeric");
        printf("\nChar 2\nResult: %d\n", ft_isalnum('2'));
        printf("Should return 0 when char is not alphanumeric");
        printf("\nChar: (breakline)\nResult: %d\n", ft_isalnum('\n'));
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

	printf("\n--- ft_isprint ---\n");
	printf("Should return 1 when char is printable");
	printf("\nChar: k\nResult: %d\n", ft_isprint('k'));
	printf("Should return 0 when char is not printable");
	printf("\nChar (tab)\nResult: %d\n", ft_isprint('\t'));
	printf("------------------\n");

	printf("\n--- ft_strlen ---\n");
	printf("Should return 6 when str is BANANA");
	printf("\nResult: %zu\n", ft_strlen("BANANA"));
	printf("Should return 0 when str is empty");
	printf("\nResult: %zu\n", ft_strlen(""));

	printf("\n--- ft_memset ---\n");
	int numbuffer[] = {1, 2, 3, 4};
	char buffer[] = "This is a test of the memset function";
	
	printf("Should fill the memory with 10 bytes of *");
	printf("\nBefore: %s\n", buffer);
	ft_memset(buffer, '*', 10);
	printf("After: %s\n", buffer);

	printf("When fill the memory of int type it will return the substitution with the decimal value of the hexadecimal combination of the provided byte");
	ft_memset(numbuffer, '2', 16);
	for(int i=0; i<4; ++i)
       	{
  		printf("%i ", numbuffer[i]);
	}



	return(0);
}
