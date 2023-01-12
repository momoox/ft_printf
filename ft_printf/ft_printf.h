/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:03:26 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/12 23:27:56 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

char	ft_putchar_fd(char c, int fd, int *error, int *ptr);
int		ft_printf(const char *str, ...);
int		ft_putnbr_fd_x(unsigned int n, int fd, int *error, int *ptr);
int		ft_putnbr_fd_u(unsigned int n, int fd, int *error, int *ptr);
int		ft_putnbr_fd_xx(unsigned int n, int fd, int *error, int *ptr);
int		ft_putnbr_fd_p(unsigned long int n, int fd, int *error, int *ptr);
int		ft_putstr_fd(char *s, int *error, int *ptr);
int		ft_putnbr(int n, int fd, int *error, int *ptr);

#endif
