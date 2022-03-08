/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:56:48 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 18:48:01 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

int	destroy_window(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_window(map->mlx, map->win);
	ft_free(map->map);
	ft_printf("\t=>Closing the window!\n");
	exit (EXIT_SUCCESS);
}

int	destroy_window_lost(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_window(map->mlx, map->win);
	ft_free(map->map);
	ft_printf("\t=>You Are Lost!\n");
	exit (EXIT_SUCCESS);
}

int	destroy_window_win(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_window(map->mlx, map->win);
	ft_free(map->map);
	ft_printf("\t=>You Are Succes!\n");
	exit (EXIT_SUCCESS);
}
