/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmunoz- <crmunoz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:42:27 by crmunoz-          #+#    #+#             */
/*   Updated: 2023/12/22 18:06:50 by crmunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *s, ...);
int		ft_conversion(char s, va_list args);
int		ft_check_c(va_list args);
int		ft_check_d_i(va_list args);
int		ft_check_s(va_list args);
void	ft_check_x(char s, va_list args);

#endif