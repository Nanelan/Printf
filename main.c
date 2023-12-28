/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:02:17 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/28 11:44:50 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	main(void)
{
	ft_printf("%d caracteres.\n", ft_printf("%u\n", -10));
	printf("%d caracteres.\n", printf("%u\n", -10));
	return (0);
}
