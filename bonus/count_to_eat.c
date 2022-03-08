/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_to_eat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 02:58:10 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 17:55:03 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	count_to_eat(t_map *map)
{
	int	i;
	int	j;

	map->count_collectible = 0;
	i = 0;
	while (i < map->map_height)
	{
		j = 0;
		while (j < (int)ft_strlen(map->map[0]))
		{
			if (map->map[i][j] == 'C')
				map->count_collectible++;
			j++;
		}
		i++;
	}
}
