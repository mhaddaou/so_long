/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:50:28 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/12/09 00:18:46 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(unsigned long long l)
{
	int	len;

	len = 0;
	while (l != 0)
	{
		l = l / 16;
		len++;
	}
	return (len);
}

void	ft_ptrp(unsigned long long p)
{
	if (p >= 16)
	{
		ft_ptrp(p / 16);
		ft_ptrp(p % 16);
	}
	else
	{
		if (p < 10)
			ft_putchar_fd((p + 48), 1);
		else
			ft_putchar_fd((p + 87), 1);
	}
}

int	ft_hex_print(unsigned long long ptr)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	count += write(1, "0x", 2);
	if (ptr == 0)
		count += write(1, "0", 1);
	else
		ft_ptrp(ptr);
	count += ft_len(ptr);
	return (count);
}
