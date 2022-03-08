/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_hand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:54:38 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 18:52:28 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	err_hand(int err, char **map)
{
	ft_free(map);
	if (err == 0)
		ft_putstr_fd("Error\n=> The map is empty", 2);
	if (err == 1)
	{
		ft_putstr_fd("Error\n=>The fist line or the last ", 2);
		ft_putstr_fd("line is not correct\n", 2);
	}
	if (err == 2)
		ft_putstr_fd("Error\n=>The lenght of the line is not correct\n", 2);
	if (err == 3)
	{
		ft_putstr_fd("Error\n=>The start of the line or the ", 2);
		ft_putstr_fd("end of the line is not equal 1\n", 2);
	}
	if (err == 4)
	{
		ft_putstr_fd("Error\n=>Not found collectible or exit more than ", 2);
		ft_putstr_fd("one or player more than one or enemy\n", 2);
	}
	if (err == 5)
		ft_putstr_fd("Error\n=>The presence of an unauthorized character", 2);
	exit (EXIT_FAILURE);
}
