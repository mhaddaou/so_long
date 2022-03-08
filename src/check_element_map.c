/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_element_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 04:59:55 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 06:05:33 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_element_map(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	map->c = 0;
	map->e = 0;
	map->p = 0;
	while (i < map->map_height)
	{
		j = 0;
		while (j < (int)ft_strlen(map->map[0]))
		{
			if (map->map[i][j] == 'C')
				map->c++;
			if (map->map[i][j] == 'P')
				map->p++;
			if (map->map[i][j] == 'E')
				map->e++;
			j++;
		}
		i++;
	}
	if (map->e != 1 || map->c < 1 || map->p != 1)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
