/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:05:59 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/13 00:04:25 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_cond(va_list args, const char *str, int *error, int i)
{
	int	*ptr;
	int	count;

	count = 0;
	ptr = &count;
	if (str[i] == 'c')
		ft_putchar_fd((char)va_arg(args, char *), 1, error, ptr);
	if (str[i] == 's')
		ft_putstr_fd(va_arg(args, char *), error, ptr);
	if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(args, int), 1, error, ptr);
	if (str[i] == 'u')
		ft_putnbr_fd_u(va_arg(args, unsigned int), 1, error, ptr);
	if (str[i] == 'x')
		ft_putnbr_fd_x(va_arg(args, int), 1, error, ptr);
	if (str[i] == 'X')
		ft_putnbr_fd_xx(va_arg(args, int), 1, error, ptr);
	if (str[i] == 'p')
	{
		ft_putstr_fd("0x", error, ptr);
		ft_putnbr_fd_p(va_arg(args, unsigned long int), 1, error, ptr);
	}
	if (str[i] == '%')
		ft_putchar_fd('%', 1, error, ptr);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		error;
	int		*ptr;
	int		count;

	va_start(args, str);
	i = 0;
	error = 0;
	count = 0;
	ptr = &count;
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar_fd(str[i++], 1, &error, ptr);
		if (str[i] == '%')
		{
			i++;
			count += ft_printf_cond(args, str, &error, i++);
		}
	}
	va_end(args);
	if (error == -1)
		return (-1);
	return (count);
}
