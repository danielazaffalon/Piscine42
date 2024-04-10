/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 00:32:43 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/10 00:40:28 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

int	ft_map_size(char *path, char c)
{
	int		file;
	int		buff_size;
	char	buff_c;

	file = open(path, O_RDONLY);
	buff_size = 0;
	while (read(file, &buff_c, 1) && buff_c != c)
		buff_size++;
	close(file);
	return (buff_size);
}

int	ft_atoi(char *str)
{
	int	neg;
	int	num;

	neg = 0;
	num = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg++;
		str++;
	}
	if (neg % 2 == 0)
		neg = 1;
	else
		neg = -1;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	num = num * neg;
	return (num);
}

int	parse_map_info(int file, char *path, struct s_map *map)
{
	int		f_line_size;
	char	*buff_line;
	char	temp;

	f_line_size = ft_map_size(path, '\n') - 3;
	buff_line = malloc(sizeof(char) * f_line_size + 1);
	read(file, buff_line, f_line_size);
	buff_line[f_line_size] = '\0';
	(*map).rows = ft_atoi(buff_line);
	read(file, &map->empty_c, 1);
	read(file, &map->obst_c, 1);
	read(file, &map->full_c, 1);
	read(file, &temp, 1);
	free(buff_line);
	if (map->empty_c == map->obst_c || map->empty_c == map->full_c
		|| map->obst_c == map->full_c || map->rows <= 0)
		return (0);
	else
		return (f_line_size + 4);
}

int	ft_parse_graph(struct s_map *map, int file)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (read(file, &map->graph[i], 1))
	{
		if (map->graph[i] != '\n')
		{
			i++;
			j++;
		}
		else
		{
			if (!map->cols)
				map->cols = j;
			else if (map->cols != j)
				return (1);
			j = 0;
		}
	}
	return (0);
}

int	ft_get_map(char *path, struct s_map *map)
{
	int	file;
	int	buff_size;
	int	f_line_size;

	file = open(path, O_RDONLY);
	if (file < 0)
		return (1);
	f_line_size = parse_map_info(file, path, map);
	buff_size = ft_map_size(path, '\0') - f_line_size;
	if (f_line_size && buff_size > 0)
	{
		buff_size = buff_size - map->rows;
		map->graph = malloc(sizeof(char) * buff_size);
		map->cols = 0;
		if (!ft_parse_graph(map, file))
		{
			map->graph[buff_size - 1] = '\0';
			close(file);
			return (0);
		}
		free(map->graph);
	}
	close(file);
	return (1);
}
