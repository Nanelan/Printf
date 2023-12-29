/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:31:47 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/29 11:42:34 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	char		str;
	static int	total;
	int			j;

	total = 0;
	if (n >= 10)
	{
		j = ft_putnbr_u(n / 10);
		str = '0' + n % 10;
		if (j == -1)
			return (-1);
	}
	else
		str = '0' + n;
	j = write(1, &str, 1);
	if (j == -1)
		return (-1);
	return (++total);
}

int	ft_check_u(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_putnbr_u(n));
}
