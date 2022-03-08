/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:46:27 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 18:44:33 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	move_left(t_map *map)
{
	if (map->map[map->p_y][map->p_x - 1] == '1' ||
			(map->map[map->p_y][map->p_x - 1] == 'E' &&
				map->count_collectible > 0))
		return ;
	if (map->map[map->p_y][map->p_x - 1] == 'E' && map->count_collectible == 0)
		destroy_window_win(map);
	check_position_enemy(map);
	if (map->map[map->p_y][map->p_x - 1] == map->map[map->e_y][map->e_x])
		destroy_window_lost(map);
	map->map[map->p_y][map->p_x] = '0';
	map->map[map->p_y][map->p_x - 1] = 'P';
	map->move_p++;
	ft_printf("move == %d\n", map->move_p);
	mlx_clear_window(map->mlx, map->win);
	move_enemy(map);
	position_player(map);
	check_and_print(map);
}

void	move_right(t_map *map)
{
	if (map->map[map->p_y][map->p_x + 1] == '1' ||
			(map->map[map->p_y][map->p_x + 1] == 'E' &&
				map->count_collectible > 0))
		return ;
	if (map->map[map->p_y][map->p_x + 1] == 'E' && map->count_collectible == 0)
		destroy_window_win(map);
	check_position_enemy(map);
	if (map->map[map->p_y][map->p_x + 1] == map->map[map->e_y][map->e_x])
		destroy_window_lost(map);
	map->map[map->p_y][map->p_x] = '0';
	map->map[map->p_y][map->p_x + 1] = 'P';
	map->move_p++;
	ft_printf("move == %d\n", map->move_p);
	mlx_clear_window(map->mlx, map->win);
	move_enemy(map);
	position_player(map);
	check_and_print(map);
}

void	move_down(t_map *map)
{
	if (map->map[map->p_y + 1][map->p_x] == '1' ||
			(map->map[map->p_y + 1][map->p_x] == 'E' &&
				map->count_collectible > 0))
		return ;
	if (map->map[map->p_y + 1][map->p_x] == 'E' && map->count_collectible == 0)
		destroy_window_win(map);
	map->map[map->p_y][map->p_x] = '0';
	map->map[map->p_y + 1][map->p_x] = 'P';
	map->move_p++;
	ft_printf("move == %d\n", map->move_p);
	mlx_clear_window(map->mlx, map->win);
	move_enemy(map);
	position_player(map);
	check_and_print(map);
}

void	move_above(t_map *map)
{
	if (map->map[map->p_y - 1][map->p_x] == '1' ||
			(map->map[map->p_y - 1][map->p_x] == 'E' &&
				map->count_collectible > 0))
		return ;
	if (map->map[map->p_y - 1][map->p_x] == 'E' && map->count_collectible == 0)
		destroy_window_win(map);
	map->map[map->p_y][map->p_x] = '0';
	map->map[map->p_y - 1][map->p_x] = 'P';
	map->move_p++;
	ft_printf("move == %d\n", map->move_p);
	mlx_clear_window(map->mlx, map->win);
	move_enemy(map);
	position_player(map);
	check_and_print(map);
}
