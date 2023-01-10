/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:06:53 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/10 19:36:57 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(va_list args, int *error)
{
	int		ret;
	char	*str;

	ret = 0;
	str = va_arg(args, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", error);
		return (6);
	}
	ret = ft_strlen(str);
	ft_putstr_fd(str, error);
	return (ret);
}
