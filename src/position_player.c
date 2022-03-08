/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_player.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:49:15 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 06:30:12 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	position_player(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	map->p_x = 0;
	map->p_y = 0;
	while (y < map->map_height)
	{
		x = 0;
		while (x < (int)ft_strlen(map->map[0]))
		{
			if (map->map[y][x] == 'P')
			{
				map->p_x = x;
				map->p_y = y;
			}
			x++;
		}
		y++;
	}
}
