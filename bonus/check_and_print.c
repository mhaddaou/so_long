/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:03:05 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 06:48:11 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	print_element(t_map *map, void *path, int x, int y)
{
	mlx_put_image_to_window(map->mlx, map->win, path, x, y);
}

void	check_and_print(t_map *map)
{
	map->i = 0;
	map->y = 0;
	while (map->i < map->map_height)
	{
		map->j = 0;
		map->x = 0;
		while (map->j < (int)ft_strlen(map->map[0]))
		{
			print_element(map, map->img_ground, map->x, map->y);
			if (map->map[map->i][map->j] == '1')
				print_element(map, map->img_wall, map->x, map->y);
			if (map->map[map->i][map->j] == 'C')
				print_element(map, map->img_to_eat, map->x, map->y);
			if (map->map[map->i][map->j] == 'P')
				print_element(map, map->img_player, map->x, map->y);
			if (map->map[map->i][map->j] == 'E')
				print_element(map, map->img_exit, map->x, map->y);
			if (map->map[map->i][map->j] == 'N')
				print_element(map, map->img_enemy, map->x, map->y);
			map->x += 65;
			map->j++;
		}
		map->y += 65;
		map->i++;
	}
}
