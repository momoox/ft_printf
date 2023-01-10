/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:03:26 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/10 20:26:26 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_printf_c(va_list args, int *error);
int		ft_printf_d_or_i(va_list args, int *error);
int		ft_printf_u(va_list args, int *error);
int		ft_printf_s(va_list args, int *error);
char	*ft_itoa(int n);
int		ft_printf_percent(int *error);
int		ft_printf_x(va_list args, int *error);
int		ft_printf_p(va_list args, int *error);
int		ft_printf_xx(va_list args, int *error);
int		ft_putchar_fd(char c, int fd, int *error);
int		ft_putnbr_fd_u(unsigned int n, int fd, int *ret, int *error);
void	ft_putstr_fd(char *s, int *error);
int		ft_strlen(char *str);
void	ft_putnbr_fd_d_or_i(int n, int fd, int *error);

#endif
