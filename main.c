/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:02:17 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/28 10:48:33 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	main(void)
{
	ft_printf("%d caracteres.\n", ft_printf("%p\n", (void *)1000));
	printf("%d caracteres.\n", printf("%p\n", (void *)1000));
	return (0);
}
