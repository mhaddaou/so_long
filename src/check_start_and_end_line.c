/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_start_and_end_line.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 05:03:34 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 06:31:57 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_start_and_end_line(t_map *map)
{
	int	i;
	int	len;

	len = (int)ft_strlen(map->map[0]) - 1;
	i = 1;
	while (i < map->map_height - 1)
	{
		if (map->map[i][0] != '1' || (map->map[i][len]) != '1')
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
