/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_other_element.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 05:01:47 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 06:06:16 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_other_element(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->map_height)
	{
		j = 0;
		while (j < (int)ft_strlen(map->map[0]))
		{
			if (map->map[i][j] != '1')
				if (map->map[i][j] != '0')
					if (map->map[i][j] != 'C')
						if (map->map[i][j] != 'P')
							if (map->map[i][j] != 'E')
								return (EXIT_FAILURE);
			j++;
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
