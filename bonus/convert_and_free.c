/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_and_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:18:09 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 17:37:12 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

char	*conver_and_free(t_map *map)
{
	char	*temp;
	char	*str;

	str = ft_itoa(map->move_p);
	temp = str;
	free(str);
	return (temp);
}
