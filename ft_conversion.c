/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:37:29 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/28 10:09:27 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char s, va_list args)
{
	char	*base;

	if (s == 'c')
		return (ft_check_c(args));
	else if (s == 's')
		return (ft_check_s(args));
	else if (s == 'p')
		ft_check_p(args);
	else if (s == 'd' || s == 'i')
		return (ft_check_d_i(args));
	else if (s == 'u')
		return (ft_check_u(args));
	else if (s == 'x')
	{
		base = "0123456789abcdef";
		return (ft_check_x(args, base));
	}
	else if (s == 'X')
	{
		base = "0123456789ABCDEF";
		return (ft_check_x(args, base));
	}
	else if (s == '%')
		return (write(1, "%", 1));
	return (0);
}
