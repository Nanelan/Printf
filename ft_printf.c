/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:14:09 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/28 17:02:46 by crmunoz-         ###   ########.fr       */
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
	i = -1;
	va_start (args, s);
	while (s[++i])
	{
		if (ft_format(s,i) == 1)
		{
			temp = ft_conversion(s[i + 1], args);
			i++;
			if (temp < 0)
				return (-1);
			total += temp;
		}
		else
		{
			temp = write (1, &s[i], 1);
			if (temp < 0)
				return (-1);
			total += temp;
		}
	}
	va_end (args);
	return (total);
}
