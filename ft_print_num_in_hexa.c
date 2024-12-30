/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num_in_hexa_upper.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:43:05 by cyamauch          #+#    #+#             */
/*   Updated: 2024/12/04 18:43:06 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int n, const char *base)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_putnbr_hex(n / 16, base);
	}
	len += ft_putchar(base[n % 16]);
	return (len);
}
