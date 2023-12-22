/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:20:39 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/22 18:03:53 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char		str;
	long int	nlong;
	int			total;

	total = 0;
	nlong = (long int) n;
	if (nlong < 0)
	{
		write(1, "-", 1);
		nlong = nlong * -1;
		total++;
	}
	if (nlong >= 10)
	{
		total++;
		ft_putnbr_fd(nlong / 10, fd);
		str = '0' + nlong % 10;
	}
	else
	{
		str = '0' + nlong;
		total++;
	}
	write(1, &str, 1);
}

int	ft_check_d_i(va_list args)
{
	int	n;
	int	total;

	n = va_arg(args, int);
	return(ft_putnbr(n));
}
