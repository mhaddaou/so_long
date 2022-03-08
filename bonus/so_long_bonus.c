/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:23:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/27 23:15:31 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

int	main(int argc, char *argv[])
{
	t_map	map;
	char	*file_name;

	if (argc != 2)
	{
		ft_putstr_fd("Error\nThe argument is not correct.\n", 2);
		ft_putstr_fd("\tUsage: ./so_long [map.ber]\n", 2);
		return (EXIT_FAILURE);
	}
	if (check_extension(argv[1]) == -1)
	{
		ft_putstr_fd("Error\nThe extension of the map is not correct.\n", 2);
		return (EXIT_FAILURE);
	}
	file_name = argv[1];
	map.map = read_map(file_name);
	check_map(&map);
	open_window(&map);
}
