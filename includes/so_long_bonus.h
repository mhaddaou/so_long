/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:25:37 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/02/28 19:05:19 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <mlx.h>
# include <fcntl.h>
# include "../library/library.h"
# define A (0)
# define S (1)
# define D (2)
# define W (13)
# define ESC (53)

typedef struct s_map
{
	char	**map;
	int		map_height;
	int		c;
	int		p;
	int		e;
	int		n;
	int		p_x;
	int		p_y;
	int		e_x;
	int		e_y;
	int		x;
	int		y;
	int		i;
	int		j;
	void	*mlx;
	void	*win;
	int		img_width;
	int		img_height;
	void	*img_ground;
	void	*img_wall;
	void	*img_player;
	void	*img_exit;
	void	*img_to_eat;
	void	*img_enemy;
	void	*img_xpm_ground;
	void	*img_xpm_wall;
	void	*img_xpm_player;
	void	*img_xpm_exit;
	void	*img_xpm_to_eat;
	void	*img_xpm_enemy;
	int		font_w;
	int		font_h;
	int		count_collectible;
	int		move_p;
	void	*img_lost;
}	t_map;

int		check_extension(char *file_name);
char	**read_map(char *file_name);
int		open_count_line(char *file_name);
int		count_line(int fd);
void	ft_free(char **map);
void	error_handel(char **map, int i);
void	check_map(t_map *map);
void	err_hand(int err, char **map);
int		check_lenght_line(t_map *map);
int		check_start_and_end_line(t_map *map);
int		check_element_map(t_map *map);
void	position_player(t_map *map);
int		open_window(t_map *map);
void	get_img_to_all(t_map *map);
void	check_and_print(t_map *map);
void	print_element(t_map *map, void *path, int x, int y);
void	count_to_eat(t_map *map);
void	move_above(t_map *map);
void	move_left(t_map *map);
void	move_right(t_map *map);
void	move_down(t_map *map);
int		destroy_window_win(t_map *map);
int		destroy_window(t_map *map);
void	move_enemy(t_map *map);
void	check_position_enemy(t_map *map);
char	*conver_and_free(t_map *map);
int		destroy_window_lost(t_map *map);
int		check_other_element(t_map *map);
void	ft_init(t_map *map);

#endif
