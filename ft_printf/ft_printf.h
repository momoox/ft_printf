/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:03:26 by mgeisler          #+#    #+#             */
/*   Updated: 2023/01/05 17:01:12 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *, ...);
int		ft_printf_c(va_list args);
int		ft_printf_d_or_i(va_list args);
int		ft_printf_u(va_list args);
int		ft_printf_s(va_list args);
char	*ft_itoa(int n);
int		ft_printf_percent(void);
int		ft_printf_x(va_list args);
int		ft_printf_p(va_list args);
int		ft_printf_xx(va_list args);
void	ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd_u(unsigned int n, int fd, int *ret);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);

#endif
