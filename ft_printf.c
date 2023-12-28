/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:14:09 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/27 13:17:58 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		i;
	int		total;
	int		temp;

	total = 0;
	i = 0;
	va_start (args, s);
	while (s[i])
	{
		if (s[i] == '%' && (s[i + 1] == 'c' || s[i + 1] == 's'
				|| s[i + 1] == 'p' || s[i + 1] == 'd' || s[i + 1] == 'i'
				|| s[i + 1] == 'u' || s[i + 1] == 'x' || s[i + 1] == 'X'
				|| s[i + 1] == '%'))
		{
			temp = ft_conversion(s[i + 1], args);
			i++;
			if (temp < 0)
				return (-1);
			else
				total += temp;
		}
		else
		{
			temp = write (1, &s[i], 1);
			if (temp < 0)
				return (-1);
			else
				total += temp;
		}
		i++;
	}
	va_end (args);
	if (total < 0)
		return (-1);
	return (total);
}
