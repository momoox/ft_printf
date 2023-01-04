/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:05:59 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/03 19:18:34 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_cond(va_list args, const char *str, int i)
{
	int	ret;

	ret = 0;
	if (str[i] == 'c')
		ret = ft_printf_c(args);
	if (str[i] == 's')
		ret = ft_printf_s(args);
	if (str[i] == 'd' || str[i] == 'i')
		ret = ft_printf_d_or_i(args);
	if (str[i] == 'u')
		ret = ft_printf_u(args);
	// if (str[i] == 'x')
	// 	ft_printf_x(va_arg(args));
	if (str[i] == '%')
		ret += ft_printf_percent();
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	int		ret;
	int		i;
	va_list args;

	va_start(args, str);
	ret = 0;
	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] && str[i] == '%')
		{
			i++;
			ret += ft_printf_cond(args, str, i);
			i++;
		}
		while (str[i] && str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
			ret++;
		}
	}
	va_end(args);
	return (ret);
}
