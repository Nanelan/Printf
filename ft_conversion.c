/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:37:29 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/22 18:01:56 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char s, va_list args)
{
	if (s == 'c')
		return (ft_check_c(args));
	else if (s == 's')
		return (ft_check_s(args));
//	else if (s == 'p')
//		ft_check_p();
	else if (s == 'd' || s == 'i')
		ft_check_d_i(args);
//	else if (s == 'u')
//		ft_check_u();
	else if (s == 'x' || s == 'X')
		ft_check_x(s, args);
	else if (s == '%')
		write(1, "%", 1);
	return (0);
}
