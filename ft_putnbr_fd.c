/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:58:43 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/23 10:52:39 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the integer 'n' to the given file descriptor 		      *
 * n: the integer to output | fd: The file descriptor on which to write       */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	s;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	s = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		s = -1;
	}
	n *= s;
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
}
