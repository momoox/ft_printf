/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:05:59 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/10 19:44:18 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_cond(va_list args, const char *str, int i, int *error)
{
	int	ret;

	ret = 0;
	if (str[i] == 'c')
		ret = ft_printf_c(args, error);
	if (str[i] == 's')
		ret = ft_printf_s(args, error);
	if (str[i] == 'd' || str[i] == 'i')
		ret = ft_printf_d_or_i(args, error);
	if (str[i] == 'u')
		ret = ft_printf_u(args, error);
	if (str[i] == 'x')
		ret = ft_printf_x(args, error);
	if (str[i] == 'X')
		ret = ft_printf_xx(args, error);
	if (str[i] == 'p')
		ret = ft_printf_p(args, error);
	if (str[i] == '%')
		ret += ft_printf_percent(error);
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	int		ret;
	int		i;
	int		error;
	va_list	args;

	va_start(args, str);
	ret = 0;
	i = 0;
	error = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1, &error);
			i++;
			ret++;
		}
		if (str[i] == '%')
		{
			i++;
			ret += ft_printf_cond(args, str, i, &error);
			i++;
		}
	}
	if (error == -1)
		return (-1);
	va_end(args);
	return (ret);
}
