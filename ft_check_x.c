/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 09:07:32 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/28 17:56:53 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_x(va_list args, char *base)
{
	unsigned long	n;
	int				n_base[16];
	int				i;
	int				total;
	int				j;

	n = va_arg(args, unsigned int);
	i = 0;
	total = 0;
	while (n >= 16)
	{
		n_base[i++] = n % 16;
		n = n / 16;
	}
	n_base[i++] = n;
	total = i;
	while (--i >= 0)
	{
		j = ft_putchar_fd(base[n_base[i]], 1);
		if (j == -1)
			return (-1);
	}
	return (total);
}
