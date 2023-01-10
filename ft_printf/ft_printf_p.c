/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:59:50 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/10 19:50:32 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd_p(unsigned long int n, int fd, int *ret, int *error)
{
	if (n < 16)
	{
		ft_putchar_fd("0123456789abcdef"[n], fd, error);
		(*ret)++;
	}
	else
	{
		ft_putnbr_fd_p(n / 16, fd, ret, error);
		ft_putnbr_fd_p(n % 16, fd, ret, error);
	}
	return (*ret);
}

int	ft_printf_p(va_list args, int *error)
{
	int					ret;
	unsigned long int	nbr;

	ret = 2;
	nbr = va_arg(args, unsigned long int);
	ft_putstr_fd("0x", error);
	ft_putnbr_fd_p(nbr, 1, &ret, error);
	return (ret);
}
