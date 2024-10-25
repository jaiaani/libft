/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jados-sa <jados-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:04:27 by jados-sa          #+#    #+#             */
/*   Updated: 2024/10/25 11:59:52 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Check for any printable character including space.			      */	

#include "libft.h"

int	ft_isprint(char c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
