/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:24:58 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/23 10:49:37 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Compare memory areas							      *
 * Compares the first n bytes (each interpreted as unsigned char) of 	      *
 * the memory s1 and s2							      */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = "Hello, Earth!";
    char str4[] = "Hello";
    char str5[] = "Hellz";

    int result = ft_memcmp(str1, str2, strlen(str1));
    printf("Teste 1: memcmp(str1, str2) = %d\n", result);

    result = ft_memcmp(str1, str3, strlen(str1));
    printf("Teste 2: memcmp(str1, str3) = %d\n", result); 

    result = ft_memcmp(str1, str4, 5);
    printf("Teste 3: memcmp(str1, str4, 5) = %d\n", result);

    result = ft_memcmp(str4, str5, 5);
    printf("Teste 4: memcmp(str4, str5, 5) = %d\n", result); 

    unsigned char mem1[] = {0x01, 0x02, 0x03, 0x04, 0x05};
    unsigned char mem2[] = {0x01, 0x02, 0x03, 0x04, 0x06};

    result = ft_memcmp(mem1, mem2, sizeof(mem1));
    printf("Teste 5: memcmp(mem1, mem2) = %d\n", result);  // (0x05 < 0x06)

    result = ft_memcmp(mem1, mem1, sizeof(mem1));
    printf("Teste 6: memcmp(mem1, mem1) = %d\n", result);  // 0

    return 0;
}*/
