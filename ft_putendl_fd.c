/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:49:08 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/29 12:36:48 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string 's' to the given file descriptor followed by a newline  *
 * s: The string to output | fd: The file descriptor                          */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
