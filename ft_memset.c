/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:17:19 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/23 20:20:34 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Fill memory with a constant bytei					      *	
 * Fills the first n bytes of the memory area pointed to by s with the        *
 * constant byte c.							      */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *) dest;
	i = 0;
	while (i <= n - 1)
	{
		d[i] = c;
		i++;
	}
	return (d);
}

/*#include <memory.h>
#include <stdio.h>

int main( void )
{
	int numbuffer[] = {1, 2, 3, 4};
	char buffer[] = "This is a test of the memset function";
	char buffer2[] = "This is a test of the memset function";
	
	//printf("Before: %s\n", buffer);
	//memset(numbuffer, '2', 16);
	ft_memset(numbuffer, '2', 16);
	//printf("After:  %s\n", numbuffer);
	for(int i=0; i<4; ++i)
       	{
  		printf("mine: %i ", numbuffer[i]);
	}
	//printf("\nMy After:  %s\n", buffer2);

}*/
