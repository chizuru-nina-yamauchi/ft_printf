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
	unsigned long	address;

	len = 0;
	address = (unsigned long)ptr;
	len += ft_putstr("0x");
	
	if (address == 0)
	{
		len += ft_putchar('0');
	}
	else
	{
		len += ft_putnbr_hex(address, "0123456789abcdef");
	}
	return (len);
}
