/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:20:39 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/27 13:37:54 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nlong)
{
	char		str;
	static int	total;

	total = 0;
	if (nlong < 0)
	{
		write(1, "-", 1);
		nlong = nlong * -1;
	}
	if (nlong >= 10)
	{
		ft_putnbr(nlong / 10);
		str = '0' + (nlong % 10);
	}
	else
		str = '0' + nlong;
	total++;
	write(1, &str, 1);
	return (total);
}

int	ft_check_d_i(va_list args)
{
	long	n;

	n = va_arg(args, int);
	if (n < 0)
		return (ft_putnbr(n) + 1);
	return (ft_putnbr(n));
}
