/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extension.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:34:28 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 06:31:10 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_extension(char *file_name)
{
	size_t	len;

	len = ft_strlen(file_name);
	if (file_name[len - 4] == '.')
		if (file_name[len - 3] == 'b')
			if (file_name[len - 2] == 'e')
				if (file_name[len - 1] == 'r')
					return (0);
	return (-1);
}
