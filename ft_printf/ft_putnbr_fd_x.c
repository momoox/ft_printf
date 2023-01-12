/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:09:17 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/12 22:15:07 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd_x(unsigned int n, int fd, int *error, int *ptr)
{
	if (n < 16)
		ft_putchar_fd("0123456789abcdef"[n], fd, error, ptr);
	else
	{
		ft_putnbr_fd_x(n / 16, fd, error, ptr);
		ft_putnbr_fd_x(n % 16, fd, error, ptr);
	}
	return (0);
}
