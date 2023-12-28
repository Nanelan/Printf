/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 09:07:32 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/28 10:08:09 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_x(va_list args, char *base)
{
	unsigned int	n;
	int				n_base[16];
	int				i;
	int				total;

	n = va_arg(args, unsigned int);
	i = 0;
	total = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	while (n)
	{
		n_base[i] = n % 16;
		n = n / 16;
		i++;
		total = i;
	}
	while (--i >= 0)
		ft_putchar_fd(base[n_base[i]], 1);
	return (total);
}
