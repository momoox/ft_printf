/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_or_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:01:19 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/03 17:30:01 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d_or_i(va_list args)
{
	int ret;
	char *str;
	int	nbr;

	ret = 0;
	nbr = va_arg(args, int);
	str = ft_itoa(nbr);
	ret = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (ret);
}
