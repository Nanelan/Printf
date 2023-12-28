/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:31:47 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/28 11:45:53 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	char		str;
	long int	nlong;
	static int	total;

	total = 0;
	nlong = (unsigned long int) n;
	if (nlong < 0)
	{
		nlong = nlong * -1;
	}
	if (nlong >= 10)
	{
		ft_putnbr_u(nlong / 10);
		total++;
		str = '0' + nlong % 10;
	}
	else
	{
		str = '0' + nlong;
		total++;
	}
	write(1, &str, 1);
	return (total);
}

int	ft_check_u(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_putnbr_u(n));
}
