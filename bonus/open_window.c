/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 02:00:57 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 18:39:57 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

int	key_hook(int key_code, t_map *map)
{
	count_to_eat(map);
	if (key_code == ESC)
		destroy_window(map);
	if (key_code == W)
		move_above(map);
	if (key_code == A)
		move_left(map);
	if (key_code == D)
		move_right(map);
	if (key_code == S)
		move_down(map);
	mlx_string_put(map->mlx, map->win, 27, 20, 0x00ffff, conver_and_free(map));
	return (0);
}

int	open_window(t_map *map)
{
	map->mlx = mlx_init();
	map->img_height = map->map_height * 64;
	map->img_width = (int)ft_strlen(map->map[0]) * 64;
	map->win = mlx_new_window(map->mlx,
			map->img_width, map->img_height, "SO_LONG");
	get_img_to_all(map);
	check_and_print(map);
	mlx_string_put(map->mlx, map->win, 27, 20, 0x00ffff, "0");
	position_player(map);
	mlx_hook(map->win, 2, 0, key_hook, map);
	mlx_hook(map->win, 17, 0, destroy_window, map);
	mlx_loop(map->mlx);
	return (0);
}
