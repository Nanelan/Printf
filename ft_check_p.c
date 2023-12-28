/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:42:16 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/28 10:56:15 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_p(va_list args)
{
	int	total;

	ft_putstr_fd("0x", 1);
	total = (ft_check_x(args, "0123456789abcdef"));
	return (total + 2);
}
