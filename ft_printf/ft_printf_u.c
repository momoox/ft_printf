/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:39:55 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/10 20:13:45 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(va_list args, int *error)
{
	unsigned int	nbr;
	int				ret;

	ret = 0;
	nbr = va_arg(args, unsigned int);
	ft_putnbr_fd_u(nbr, 1, &ret, error);
	return (ret);
}

int	ft_putnbr_fd_u(unsigned int n, int fd, int *ret, int *error)
{
	if (n < 10)
	{
		ft_putchar_fd(n + 48, fd, error);
		(*ret)++;
		return (n);
	}
	else
	{
		ft_putnbr_fd_u(n / 10, fd, ret, error);
		ft_putnbr_fd_u(n % 10, fd, ret, error);
	}
	return (*ret);
}
