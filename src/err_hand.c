/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_hand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:54:38 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 06:17:20 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	err_hand(int err, char **map)
{
	ft_free(map);
	if (err == 0)
		ft_putstr_fd("Error\n=> The map is empty", 2);
	if (err == 1)
		ft_putstr_fd("Error\n=>The fist line or the \
				dlast line is not correct\n", 2);
	if (err == 2)
		ft_putstr_fd("Error\n=>The lenght of the line is not correct\n", 2);
	if (err == 3)
	{
		ft_putstr_fd("Error\n=>The start of the line", 2);
		ft_putstr_fd(" or the end of the line is not equal 1\n", 2);
	}
	if (err == 4)
	{
		ft_putstr_fd("Error\n=>Not found collectible or", 2);
		ft_putstr_fd(" exit more than one or player more than one\n", 2);
	}
	if (err == 5)
		ft_putstr_fd("Error\n=>The presence of an unauthorized character", 2);
	exit(EXIT_FAILURE);
}
