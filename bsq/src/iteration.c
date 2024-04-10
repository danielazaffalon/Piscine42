/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iteration.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:22:43 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/10 01:22:47 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iteration.h"

int	find_min_dis(int x1, int x2, int y1, int y2)
{
	int	y;
	int	x;

	y = y2 - y1;
	x = x2 - x1;
	if (y < x)
		return (y);
	else
		return (x);
}

int	find_max_dis(int x1, int x2, int y1, int y2)
{
	int	y;
	int	x;

	y = y2 - y1;
	x = x2 - x1;
	if (y > x)
		return (y);
	else
		return (x);
}

int	find_max_square(struct s_map *map, int row, int col)
{
	int	max;
	int	i;
	int	j;
	int	curr_pos;
	int	temp_max;

	max = find_min_dis(row, map->rows, col, map->cols);
	i = row;
	while (i < (max + row))
	{
		j = col;
		while (j < (max + col))
		{
			curr_pos = (i * map->cols) + j;
			if (map->graph[curr_pos] == map->obst_c)
			{
				temp_max = find_max_dis(row, i, col, j);
				if (temp_max < max)
					max = temp_max;
			}
			j++;
		}
		i++;
	}
	return (max);
}

int	iterate_square(struct s_map *map)
{
	int	i;
	int	j;
	int	sq;

	i = 0;
	map->max_sq = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			sq = find_max_square(map, i, j);
			if (sq > map->max_sq)
			{
				map->max_sq = sq;
				map->pos_row = i;
				map->pos_col = j;
			}
			j++;
		}
		i++;
	}
	return (0);
}
