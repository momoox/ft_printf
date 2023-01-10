/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_d_or_i.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:19:58 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/10 20:28:21 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd_d_or_i(int n, int fd, int *error)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", error);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd, error);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + 48, fd, error);
		return ;
	}
	else
	{
		ft_putchar_fd(n / 10, fd, error);
		ft_putchar_fd(n % 10, fd, error);
	}
}
