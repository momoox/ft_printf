/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:54:51 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/12 22:17:32 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd_xx(unsigned int n, int fd, int *error, int *ptr)
{
	if (n < 16)
		ft_putchar_fd("0123456789ABCDEF"[n], fd, error, ptr);
	else
	{
		ft_putnbr_fd_xx(n / 16, fd, error, ptr);
		ft_putnbr_fd_xx(n % 16, fd, error, ptr);
	}
	return (0);
}
