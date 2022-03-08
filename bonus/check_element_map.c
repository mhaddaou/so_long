/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_element_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:30:00 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 17:53:10 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

int	check_element_map(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	ft_init(map);
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
			if (map->map[i][j] == 'N')
				map->n++;
			j++;
		}
		i++;
	}
	if (map->e != 1 || map->c < 1 || map->p != 1 || map->n != 1)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
