/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 09:07:32 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/22 17:43:13 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_x(char s, va_list args)
{
	long int	n;
	int			n_base[16];
	int			i;
	char		*base;

	n = va_arg(args, long int);
	i = 0;
	if (n == 0)
		ft_putchar_fd('0', 1);
	while (n)
	{
		n_base[i] = n % 16;
		n = n / 16;
		i++;
	}
	if (s == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	while (--i >= 0)
		ft_putchar_fd(base[n_base[i]], 1);
}
