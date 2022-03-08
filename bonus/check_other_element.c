/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_other_element.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:31:37 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 17:54:02 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

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
								if (map->map[i][j] != 'N')
									return (EXIT_FAILURE);
			j++;
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
