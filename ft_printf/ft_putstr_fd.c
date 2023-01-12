/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:50:33 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/12 22:33:11 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int *error, int *ptr)
{
	if (!s)
	{
		ft_putstr_fd("(null)", error, ptr);
		return (0);
	}
	while (*s != '\0')
	{
		ft_putchar_fd(*s, 1, error, ptr);
		s++;
	}
	return (0);
}
