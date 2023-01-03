/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:39:55 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/03 17:58:52 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(va_list args)
{
	unsigned int	nbr;
	int 			ret;

	ret = 0;
	nbr = va_arg(args, int);
	ft_putnbr_fd(nbr, 1);
	ret++;
	return(ret);
}
