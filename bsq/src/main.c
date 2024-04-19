/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:43:09 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/10 18:32:16 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iteration.h"
#include "map.h"
#include "print.h"

#include <stdio.h>

int	create_file(char *name)
{
	int		file;
	char	c;

	file = open(name, O_WRONLY | O_CREAT, 0777);
	while (read(0, &c, 1) > 0)
		write(file, &c, 1);
	close(file);
	if (file < 0)
		return (1);
	else
		return (0);
}

void	routine(char *path, struct s_map *map, int create)
{
	int	errors;

	if (create)
		errors = create_file(path);
	if (!errors)
		errors = ft_get_map(path, map);
	if (!errors)
	{
		iterate_square(map);
		write_square(path, map);
		print_square(path);
		free(map->graph);
	}
	else
	{
		write(1, "Map error\n", 10);
		exit(-1);
	}
}

//cat example.ox | ./bsq
// ./examples/perl.sh 1000 1000 2 | ./bsq
int	main(int ac, char **av)
{
	struct s_map	map;
	int				i;

	if (ac == 1)
		routine("new2.ox", &map, 1);
	else
	{
		i = 1;
		while (i < ac)
		{
			routine(av[i], &map, 0);
			i++;
		}
	}
	exit(-1);
}
