/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void_pointer_arg.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:38:24 by cyamauch          #+#    #+#             */
/*   Updated: 2024/12/04 18:38:55 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		len += ft_putstr("(nil)");
	}
	else
	{
		len += ft_putstr("0x");
		len += ft_printptr_addr((uintptr_t)ptr, 'x');
	}
	return (len);
}

int	ft_printptr_addr(uintptr_t n, const char format)
{
	int		len;
	char	ref;

	len = 0;
	ref = 'a';
	if (format == 'X')
		ref = 'A';
	if (n >= 16)
		len += ft_printptr_addr(n / 16, format);
	if (n % 16 < 10)
		len += ft_putchar('0' + (n % 16));
	else
		len += ft_putchar(ref + (n % 16) - 10);
	return (len);
}
