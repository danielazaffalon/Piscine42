/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 04:13:09 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/10 18:36:28 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include <errno.h>

// printf("error:%i\n",errno);
int	write_square(char *path, struct s_map *map)
{
	int		file;
	char	buff_c;
	int		row;
	int		col;

	buff_c = 0;
	file = open(path, O_RDWR);
	while (buff_c != '\n')
		read(file, &buff_c, 1);
	row = 0;
	while (row < (map->pos_row + map->max_sq))
	{
		if (row >= map->pos_row && col >= map->pos_col
			&& col < (map->pos_col + map->max_sq))
			write(file, &map->full_c, 1);
		else
			read(file, &buff_c, 1);
		if (buff_c == '\n')
		{
			row++;
			col = 0;
		}
		col++;
	}
	close(file);
	return (0);
}

int	print_square(char *path)
{
	int		file;
	char	buff_c;

	file = open(path, O_RDONLY);
	while (read(file, &buff_c, 1))
	{
		write(1, &buff_c, 1);
	}
	close(file);
	return (0);
}
