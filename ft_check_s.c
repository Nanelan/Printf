/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:52:30 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/22 17:42:50 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_s(va_list args)
{
	char	*str;
	int 	total;

	total = 0;
	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	while (str && *str)
	{
		if (write (1, str, 1) < 0)
			return (-1);
		total++;
		str++;
	}
	return (total);
}
