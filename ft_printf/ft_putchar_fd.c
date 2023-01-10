/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 22:25:14 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/10 19:38:44 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd, int *error)
{
	int	a;

	a = 0;
	if (*error != -1)
	{
		a = write(fd, &c, 1);
		c++;
	}
	if (a == -1)
	{
		*error = -1;
		return (-1);
	}
	return (0);
}
