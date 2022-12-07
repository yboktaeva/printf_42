/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:18:04 by yuboktae          #+#    #+#             */
/*   Updated: 2022/12/07 11:23:29 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		res;

	len = 0;
	res = 0;
	va_start(args, format);
	while (format[len])
	{
		if (format[len] == '%' && ft_strchr("cspdiuxX%", format[len + 1]))
		{
			res += ft_printbase(format, len, args);
			len++;
		}
		else
			res += ft_putchar(format[len]);
		len++;
	}
	va_end(args);
	return (res);
}
