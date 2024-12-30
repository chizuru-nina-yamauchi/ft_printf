/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:49:50 by cyamauch          #+#    #+#             */
/*   Updated: 2024/12/04 17:51:02 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char specifier, va_list args)
{
	int	len;

	len = 0;
	if (specifier == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		len += ft_print_pointer(va_arg(args, void *));
	else if (specifier == 'd' || specifier == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		len += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (specifier == 'x')
		len += ft_putnbr_hex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (specifier == 'X')
		len += ft_putnbr_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (specifier == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		total_len;

	i = 0;
	total_len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			total_len += handle_format(format[i + 1], args);
			i++;
		}
		else
		{
			total_len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (total_len);
}
