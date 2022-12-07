/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:53:19 by yuboktae          #+#    #+#             */
/*   Updated: 2022/12/06 20:12:33 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowerhex(unsigned long n)
{
	char	*hex;
	int		len;

	hex = "0123456789abcdef";
	len = 0;
	if (n >= 16)
	{
		len += ft_lowerhex(n / 16);
	}
	len += ft_putchar(hex[n % 16]);
	return (len);
}
