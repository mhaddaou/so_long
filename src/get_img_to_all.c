/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_img_to_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 02:08:35 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 06:41:18 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	get_img_to_all(t_map *map)
{
	void	*img_ground;
	void	*img_wall;
	void	*img_player;
	void	*img_exit;
	void	*img_to_eat;

	img_ground = "./img/vground.xpm";
	img_wall = "./img/wall.xpm";
	img_player = "./img/player_01.xpm";
	img_exit = "./img/house.xpm";
	img_to_eat = "./img/collect.xpm";
	map->img_ground = mlx_xpm_file_to_image(map->mlx,
			img_ground, &map->font_w, &map->font_h);
	map->img_wall = mlx_xpm_file_to_image(map->mlx,
			img_wall, &map->font_w, &map->font_h);
	map->img_player = mlx_xpm_file_to_image(map->mlx,
			img_player, &map->font_w, &map->font_h);
	map->img_exit = mlx_xpm_file_to_image(map->mlx,
			img_exit, &map->font_w, &map->font_h);
	map->img_to_eat = mlx_xpm_file_to_image(map->mlx,
			img_to_eat, &map->font_w, &map->font_h);
}	
