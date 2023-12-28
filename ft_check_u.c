/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:31:47 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/26 13:28:01 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(int n)
{
	char		str;
	long int	nlong;
	static int	total;

	total = 0;
	nlong = (long int) n;
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
	int	n;

	n = va_arg(args, int);
	return (ft_putnbr_u(n));
}
