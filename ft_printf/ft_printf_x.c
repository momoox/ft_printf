/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:09:17 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/10 19:37:09 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd_x(unsigned int n, int fd, int *ret, int *error)
{
	if (n < 16)
	{
		ft_putchar_fd("0123456789abcdef"[n], fd, error);
		(*ret)++;
	}
	else
	{
		ft_putnbr_fd_x(n / 16, fd, ret, error);
		ft_putnbr_fd_x(n % 16, fd, ret, error);
	}
	return (*ret);
}

int	ft_printf_x(va_list args, int *error)
{
	int				ret;
	unsigned int	nbr;

	ret = 0;
	nbr = va_arg(args, unsigned int);
	ft_putnbr_fd_x(nbr, 1, &ret, error);
	return (ret);
}
