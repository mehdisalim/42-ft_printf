/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:21:57 by esalim            #+#    #+#             */
/*   Updated: 2022/10/18 14:40:16 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	// if (!s[i] || !s)
	// {
	// 	write(1, "", 0);
	// 	return ;
	// }
	while (s[i])
		write(1, &s[i++], 1);
	*count += i;
}