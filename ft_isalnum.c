/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 22:19:51 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/15 22:21:59 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//checks for an alphanumeric character; 

#include "libft.h"

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);	
}
