/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:42:16 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/29 09:45:19 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(va_list args, char *base)
{
	unsigned long	n;
	int				n_base[16];
	int				i;
	int				total;
	int				j;

	n = va_arg(args, unsigned long);
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

int	ft_check_p(va_list args)
{
	int		j;
	int		i;
	char	*s;

	i = 0;
	s = "0x";
	while (s[i] != '\0')
	{
		j = write(1, &s[i], 1);
		i++;
		if (j == -1)
			return (-1);
	}
	return ((ft_hexa(args, "0123456789abcdef")) + 2);
}
