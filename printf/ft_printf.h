/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darotche <darotche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:06:14 by darotche          #+#    #+#             */
/*   Updated: 2023/06/12 17:27:16 by darotche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_check_format(const char i, va_list list, int count);
int	ft_printf(const char *format, ...);
int	ft_put_adr(unsigned long n);
int	ft_put_hex(unsigned int num, int c);
int	ft_put_unsigned(unsigned int n);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_strlen(const char	*str);

#endif