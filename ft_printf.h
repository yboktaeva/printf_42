/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:06:43 by yuboktae          #+#    #+#             */
/*   Updated: 2022/12/06 21:12:07 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stddef.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_printbase(const char *format, int len, va_list args);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
int		ft_putstr(char *s);
int		ft_putchar(int c);
int		ft_putnbr(int n);
int		ft_unsign(unsigned int nb);
int		ft_upperhex(unsigned int n);
int		ft_lowerhex(unsigned long n);
int		ft_point(unsigned long nb);

#endif
