/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_above.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 06:28:05 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 06:32:57 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

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
	ft_printf("\t=>move == %d\n", map->move_p);
	mlx_clear_window(map->mlx, map->win);
	position_player(map);
	check_and_print(map);
}
