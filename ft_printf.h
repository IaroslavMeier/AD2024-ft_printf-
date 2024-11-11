/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeier < imeier@student.42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:52:40 by imeier            #+#    #+#             */
/*   Updated: 2024/11/11 18:52:40 by imeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> //unistd.h
# include <stdarg.h>

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_puthex(unsigned int n, int index, int *len);
void	ft_putnbr(long n, int *len);
void	ft_putaddress(unsigned long addr, int *len);

#endif