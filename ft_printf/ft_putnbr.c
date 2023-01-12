/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:48:31 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/12 23:42:34 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_control(int n, int fd, int *error, int *ptr)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", error, ptr);
		return (0);
	}
	if (n == 0)
	{
		ft_putchar_fd('0', fd, error, ptr);
		return (0);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd, error, ptr);
		n *= -1;
	}
	return (n);
}

int	ft_putnbr(int n, int fd, int *error, int *ptr)
{
	char	tab[20];
	int		count;
	int		mod;
	int		control;

	count = 0;
	control = ft_control(n, fd, error, ptr);
	if (control == 0)
		return (0);
	n = control;
	while (n >= 1)
	{
		mod = n % 10;
		tab[count] = mod + 48;
		count++;
		n = n / 10;
	}
	count--;
	while (count >= 0)
	{
		ft_putchar_fd(tab[count], 1, error, ptr);
		count--;
	}
	return (0);
}
