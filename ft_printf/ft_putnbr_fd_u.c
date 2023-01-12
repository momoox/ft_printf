/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:39:55 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/12 22:13:35 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd_u(unsigned int n, int fd, int *error, int *ptr)
{
	if (n < 10)
		ft_putchar_fd(n + 48, fd, error, ptr);
	else
	{
		ft_putnbr_fd_u(n / 10, fd, error, ptr);
		ft_putnbr_fd_u(n % 10, fd, error, ptr);
	}
	return (0);
}
