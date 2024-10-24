/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:14:37 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/23 20:44:59 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Scan memory for a character.						      *
 * Scans the initial n bytes of the memory area pointed to by s for the first *
 * instance of c. Both c and the bytes of the memory area pointed to by s are *
 * interpreted as unsigned char.					      *
 * Returns a pointer to the matching byte of NULL if the character does not   *
 * occur in the given memory 						      */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <memory.h>

int main( void )
{
	int  ch = 'r';
	char string[] = "The quick brown dog jumps over the lazy fox";
	char fmt1[] =   "         1         2         3         4         5";
	char fmt2[] =   "12345678901234567890123456789012345678901234567890";

   	char *pdest;
   	int result;
   	printf( "String to be searched:\n             %s\n", string );
   	printf( "             %s\n             %s\n\n", fmt1, fmt2 );

   	printf( "Search char: %c\n", ch );
   	pdest = ft_memchr(string, ch, sizeof( string ) );
   	result = (int)(pdest - string + 1);
   	if ( pdest != NULL )
      		printf( "Result:      %c found at position %d\n", ch, result);
   	else
     		printf( "Result:      %c not found\n", ch );
}*/
