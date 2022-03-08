/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_img_to_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 02:08:35 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 18:34:08 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	get_img_to_all(t_map *map)
{
	map->img_xpm_ground = "./img/vground.xpm";
	map->img_xpm_wall = "./img/wall.xpm";
	map->img_xpm_player = "./img/player_01.xpm";
	map->img_xpm_exit = "./img/house.xpm";
	map->img_xpm_to_eat = "./img/collect.xpm";
	map->img_xpm_enemy = "./img/enemy.xpm";
	map->img_ground = mlx_xpm_file_to_image(map->mlx,
			map->img_xpm_ground, &map->font_w, &map->font_h);
	map->img_wall = mlx_xpm_file_to_image(map->mlx,
			map->img_xpm_wall, &map->font_w, &map->font_h);
	map->img_player = mlx_xpm_file_to_image(map->mlx,
			map->img_xpm_player, &map->font_w, &map->font_h);
	map->img_exit = mlx_xpm_file_to_image(map->mlx,
			map->img_xpm_exit, &map->font_w, &map->font_h);
	map->img_to_eat = mlx_xpm_file_to_image(map->mlx,
			map->img_xpm_to_eat, &map->font_w, &map->font_h);
	map->img_enemy = mlx_xpm_file_to_image(map->mlx,
			map->img_xpm_enemy, &map->font_w, &map->font_h);
}	
