/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:15:53 by esalim            #+#    #+#             */
/*   Updated: 2022/10/18 16:04:52 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int checkcondition(char c, va_list  lst, int *count)
{
	char *str;
	if (ft_strchr("cspdiuxX%", c))
	{
		if (c == 'd' || c == 'i')
			ft_putnbr(va_arg(lst, int), count);
		else if (c == 's')
		{
			if ((str = va_arg(lst,char*)))
				ft_putstr(str, count);
			else
				ft_putstr("(null)", count);
		}
		else if (c == 'c')
			ft_putchar(va_arg(lst, int), count);
		else if (c == 'x')
			ft_putnbr_base(va_arg(lst, int), "0123456789abcdef", count);
		else if (c == 'X')
			ft_putnbr_base(va_arg(lst, int), "0123456789ABCDEF", count);
		else if (c == 'p')
		{
			ft_putstr("0x", count);
			ft_putnbr_base(va_arg(lst, unsigned long), "0123456789abcdef", count);
		}
		else if (c == '%')
			ft_putchar('%', count);
		return (1);
	}
	else
		return (0);
}

int ft_printf(const char *c, ...)
{
	va_list lst;
	int i = 0;
	int count = 0;

	va_start(lst, c);

	while (c[i])
	{
		if (c[i] == '%' && checkcondition(c[++i], lst, &count))
			i++;
		else
			ft_putchar(c[i++], &count);
		
	}
	va_end(lst);
	return (count);
}
