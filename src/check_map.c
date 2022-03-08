/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:32:08 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 05:51:21 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_empty_map(t_map *map)
{
	if (map->map[0] == NULL)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	map_height(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (1)
	{
		if (map->map[i] == NULL)
			break ;
		i++;
	}
	return (i);
}

int	check_lenght_line(t_map *map)
{
	int	i;

	i = 1;
	while (i < map->map_height)
	{
		if (ft_strlen(map->map[0]) != ft_strlen(map->map[i]))
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}

int	check_first_last_line(t_map *map)
{
	int	i;

	i = 0;
	while (map->map[0][i])
	{
		if (map->map[0][i] != '1' || (map->map[map->map_height - 1][i]) != '1' )
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}

void	check_map(t_map *map)
{
	map->map_height = map_height(map);
	if (check_empty_map(map) == EXIT_FAILURE)
		err_hand(0, map->map);
	if (check_first_last_line(map) == EXIT_FAILURE)
		err_hand(1, map->map);
	if (check_lenght_line(map) == EXIT_FAILURE)
		err_hand(2, map->map);
	if (check_start_and_end_line(map) == EXIT_FAILURE)
		err_hand(3, map->map);
	if (check_element_map(map) == EXIT_FAILURE)
		err_hand(4, map->map);
	if (check_other_element(map) == EXIT_FAILURE)
		err_hand(5, map->map);
}
