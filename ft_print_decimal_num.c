/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:39:11 by cyamauch          #+#    #+#             */
/*   Updated: 2024/12/04 18:39:24 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		len +=ft_putchar('-');
		n = -n;
	}
	if (n >=10)
	{
		len += ft_putnbr(n / 10);
	}
	len += ft_putchar(n % 10 + '0');
	return (len);
}
