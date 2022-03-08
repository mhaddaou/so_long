/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enemy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:31:28 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 17:40:57 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	check_position_enemy(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	map->e_x = 0;
	map->e_y = 0;
	while (y < map->map_height)
	{
		x = 0;
		while (x < (int)ft_strlen(map->map[0]))
		{
			if (map->map[y][x] == 'N')
			{
				map->e_x = x;
				map->e_y = y;
			}
			x++;
		}
		y++;
	}
}

void	move_enemy(t_map *map)
{
	check_position_enemy(map);
	if (map->e_y > map->p_y)
	{
		if (map->map[map->e_y - 1][map->e_x] == '1')
			map->map[map->e_y][map->e_x] = 'N';
		else
		{
			map->map[map->e_y - 1][map->e_x] = 'N';
			map->map[map->e_y][map->e_x] = '0';
		}
	}
	else if (map->e_y < map->p_x)
	{
		if (map->map[map->e_y + 1][map->e_x] == '1')
			map->map[map->e_y][map->e_x] = 'N';
		else
		{
			map->map[map->e_y + 1][map->e_x] = 'N';
			map->map[map->e_y][map->e_x] = '0';
		}
	}
	position_player(map);
	check_position_enemy(map);
	if (map->p_x == 0 && map->p_y == 0)
		destroy_window_lost(map);
}
