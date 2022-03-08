# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 00:39:35 by mhaddaou          #+#    #+#              #
#    Updated: 2022/02/28 20:03:40 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: fclean
	@cd library && make all
	@gcc   -I /usr/local/include src/*.c library/library.a -o so_long -L /usr/local/lib -lmlx -framework OpenGL -framework Appkit

clean:
	@cd library && make clean
	@rm -f so_long
	@rm -f so_long_bonus

fclean: clean
	@cd library && make fclean

bonus: fclean
	@cd library && make all
	@gcc  -I /usr/local/include bonus/*.c library/library.a -o so_long_bonus -L /usr/local/lib -lmlx -framework OpenGL -framework Appkit

re:all

