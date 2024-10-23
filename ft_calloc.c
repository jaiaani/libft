/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:59:17 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/23 10:42:59 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A memory allocator							      *	
 * Shall allocate unused space for an array of 'nelem' elements each of whose *
 * size in byte is 'elsize'. The space shall be initialized to all bits 0.    */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	tsize;
	void	*space;

	if (nelem == 0 || elsize == 0)
		return (malloc(0));
	t_size = nelem * elsize;
	if (tsize / elsize != nelem)
		return (NULL);
	space = malloc(tsize);
	if (!space)
		return (NULL);
	ft_bzero(space, tsize);
	return (space);
}
