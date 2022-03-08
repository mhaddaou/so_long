/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:46:27 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 06:28:59 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	destroy_window(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_window(map->mlx, map->win);
	ft_free(map->map);
	ft_printf("\t=>Closing the window!\n");
	exit(EXIT_SUCCESS);
}

int	destroy_window_win(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_window(map->mlx, map->win);
	ft_free(map->map);
	ft_printf("\t=>You Are Succes!\n");
	exit(EXIT_SUCCESS);
}

void	move_left(t_map *map)
{
	if (map->map[map->p_y][map->p_x - 1] == '1' ||
			(map->map[map->p_y][map->p_x - 1] == 'E' &&
				map->count_collectible > 0))
		return ;
	if (map->map[map->p_y][map->p_x - 1] == 'E' && map->count_collectible == 0)
		destroy_window_win(map);
	map->map[map->p_y][map->p_x] = '0';
	map->map[map->p_y][map->p_x - 1] = 'P';
	map->move_p++;
	ft_printf("\t=>move == %d\n", map->move_p);
	mlx_clear_window(map->mlx, map->win);
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
	map->map[map->p_y][map->p_x] = '0';
	map->map[map->p_y][map->p_x + 1] = 'P';
	map->move_p++;
	ft_printf("\t=>move == %d\n", map->move_p);
	mlx_clear_window(map->mlx, map->win);
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
	ft_printf("\t=>move == %d\n", map->move_p);
	mlx_clear_window(map->mlx, map->win);
	position_player(map);
	check_and_print(map);
}
