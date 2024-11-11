/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeier < imeier@student.42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:54:05 by imeier            #+#    #+#             */
/*   Updated: 2024/11/11 18:54:05 by imeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddress(unsigned long addr, int *len)
{
	if (!addr)
		ft_putstr("(nil)", len);
	else
	{
		if (addr < 16)
		{
			ft_putstr("0x", len);
			ft_putchar(HEX_LOWER[addr % 16], len);
			return ;
		}
		ft_putaddress(addr / 16, len);
		ft_putchar(HEX_LOWER[addr % 16], len);
	}
}
