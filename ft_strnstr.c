/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:14:08 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/18 02:22:08 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* locate a substring in a string
 * Locates the first occurence of the null-terminaed string little in the
 * string big, where not more than len characters are searched. 
 * Characters that appear after a \0 character are not searched */
#include "libft.h" 

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	unsigned char	*b;

	i = 0;
	b = (char *)big;
	if (little[0] == '\0')
		return (b);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && (i + j) < len && big[i +j] == little[j])
		{
			j++;
		}
		if (!little[j])
			return (b + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char big[] = "Hello, World!";
    char little1[] = "World";
    char little2[] = "Hello";
    char little3[] = "!";
    char little4[] = "xyz";
    char little5[] = "";
    size_t len;

    // Teste 1: little está no meio de big
    len = strlen(big);
    char *result = ft_strnstr(big, little1, len);
    if (result)
        printf("Teste 1: Encontrado '%s' em '%s' -> Resultado: '%s'\n", little1, big, result);
    else
        printf("Teste 1: '%s' não encontrado em '%s'\n", little1, big);

    // Teste 2: little está no início de big
    result = ft_strnstr(big, little2, len);
    if (result)
        printf("Teste 2: Encontrado '%s' em '%s' -> Resultado: '%s'\n", little2, big, result);
    else
        printf("Teste 2: '%s' não encontrado em '%s'\n", little2, big);

    // Teste 3: little é o último caractere de big
    result = ft_strnstr(big, little3, len);
    if (result)
        printf("Teste 3: Encontrado '%s' em '%s' -> Resultado: '%s'\n", little3, big, result);
    else
        printf("Teste 3: '%s' não encontrado em '%s'\n", little3, big);

    // Teste 4: little não está em big
    result = ft_strnstr(big, little4, len);
    if (result)
        printf("Teste 4: Encontrado '%s' em '%s' -> Resultado: '%s'\n", little4, big, result);
    else
        printf("Teste 4: '%s' não encontrado em '%s'\n", little4, big);

    // Teste 5: little é uma string vazia
    result = ft_strnstr(big, little5, len);
    if (result)
        printf("Teste 5: Encontrado '%s' (string vazia) em '%s' -> Resultado: '%s'\n", little5, big, result);
    else
        printf("Teste 5: String vazia não encontrada em '%s'\n", big);

    // Teste 6: Comparar com limite de caracteres menor que a posição de little
    len = 5; // Limite de 5 caracteres
    result = ft_strnstr(big, little1, len);
    if (result)
        printf("Teste 6: Encontrado '%s' em '%s' com len=%zu -> Resultado: '%s'\n", little1, big, len, result);
    else
        printf("Teste 6: '%s' não encontrado em '%s' com len=%zu\n", little1, big, len);

    return 0;
}
*/
