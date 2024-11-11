/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeier < imeier@student.42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:54:34 by imeier            #+#    #+#             */
/*   Updated: 2024/11/11 18:54:34 by imeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_converter(long int n, int b_len, char *base, int *len)
{
	if (n / b_len == 0)
	{
		ft_putchar(base[n % b_len], len);
		return ;
	}
	else
	{
		ft_converter(n / b_len, b_len, base, len);
		ft_putchar(base[n % b_len], len);
	}
}

void	ft_puthex(unsigned int n, int index, int *len)
{
	long	num;

	num = n;
	if (index == 1)
		ft_converter(num, 16, HEX_LOWER, len);
	else if (index == 2)
		ft_converter(num, 16, HEX_UPPER, len);
}
