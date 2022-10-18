/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:18:30 by esalim            #+#    #+#             */
/*   Updated: 2022/10/18 16:27:20 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(long nbr, char *base, int islong,int *count)
{
	if (islong)
	{
		unsigned long nb = nbr;
		if (nb >= 0 && nb < 16)
			ft_putchar(base[nb], count);
		if (nb >= 16)
		{
			ft_putnbr_base(nb / 16, base, islong, count);
			ft_putnbr_base(nb % 16, base, islong, count);
		}
	}
	else
	{
		unsigned int nb = nbr;
		if (nb >= 0 && nb < 16)
			ft_putchar(base[nb], count);
		if (nb >= 16)
		{
			ft_putnbr_base(nb / 16, base, islong, count);
			ft_putnbr_base(nb % 16, base, islong, count);
		}
	}
	
}
