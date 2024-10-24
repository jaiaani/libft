/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:23:20 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/23 21:18:30 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function 'f' on each character of the string passed as argument,*
 * passing its index as first argument. Each character is passed by           *
 * address to 'f' to be modified if necessary                                 *
 * s: The string on which to iterate.                                         *
 * f: The function to apply to each character                                 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*#include <stdio.h>

void	sample_function(unsigned int index, char *c)
{
    // Exemplo de função que transforma caracteres em maiúsculas
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

int main(void)
{
    char str[] = "hello world";
    
    printf("Original string: %s\n", str);
    
    ft_striteri(str, sample_function);
    
    printf("Modified string: %s\n", str);
    
    return 0;
}*/
