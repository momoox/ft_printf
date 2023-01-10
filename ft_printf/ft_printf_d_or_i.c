/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_or_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:01:19 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/10 20:32:44 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d_or_i(va_list args, int *error)
{
	int		ret;
	int		nbr;
	char	*str;

	ret = 0;
	nbr = va_arg(args, int);
	ft_putnbr_fd_d_or_i(nbr, 1, error);
	str = ft_itoa(nbr);
	ret = ft_strlen(str);
	ft_putstr_fd(str, error);
	return (ret);
}
