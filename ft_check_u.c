/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:31:47 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/28 18:03:21 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	char		str;
	long int	nlong;
	static int	total;
	int			j;

	total = 0;
	nlong = (unsigned long int) n;
	if (nlong < 0)
		nlong = nlong * -1;
	if (nlong >= 10)
	{
		j = ft_putnbr_u(nlong / 10);
		total++;
		str = '0' + nlong % 10;
		if (j == -1)
			return (-1);
	}
	else
	{
		str = '0' + nlong;
		total++;
	}
	j = write(1, &str, 1);
	if (j == -1)
		return (-1);
	return (total);
}

int	ft_check_u(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_putnbr_u(n));
}
