/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:55:46 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/03 17:17:37 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(va_list args)
{
	int	ret;

	ret = 0;
	ft_putchar_fd(va_arg(args, int), 1);
	ret++;
	return (ret);
}
