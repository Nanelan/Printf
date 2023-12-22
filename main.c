/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:02:17 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/22 17:42:55 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
int	main(void)
{
	printf("%x\n", 0);
	printf("%d caracteres.\n", ft_printf("Esto e%c una patata s%c\n", 's', 'p'));
	return (0);
}
