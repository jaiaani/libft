/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:18:46 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/23 21:17:39 by jados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copy memory area							      *
 * Copies n bytes from memory area src to memory area dest.  		      *
 * The memory areas must not overlap. 					      */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest != src)
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main ()
{
   const char src[19] = "Copy me as a memory";
   char dest[19];
   strcpy(dest,"xxxx if you can");
   printf("Before ft_memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 24);
   printf("After ft_memcpy dest = %s\n", dest);
   return(0);
}*/
