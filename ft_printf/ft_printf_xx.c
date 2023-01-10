/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:54:51 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/10 19:37:18 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd_xx(unsigned int n, int fd, int *ret, int *error)
{
	if (n < 16)
	{
		ft_putchar_fd("0123456789ABCDEF"[n], fd, error);
		(*ret)++;
	}
	else
	{
		ft_putnbr_fd_xx(n / 16, fd, ret, error);
		ft_putnbr_fd_xx(n % 16, fd, ret, error);
	}
	return (*ret);
}

int	ft_printf_xx(va_list args, int *error)
{
	int				ret;
	unsigned int	nbr;

	ret = 0;
	nbr = va_arg(args, unsigned int);
	ft_putnbr_fd_xx(nbr, 1, &ret, error);
	return (ret);
}
