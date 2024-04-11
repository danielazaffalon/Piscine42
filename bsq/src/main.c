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

int	create_file(void)
{
	int		file;
	char	c;

	file = open("new.ox", O_RDWR | O_CREAT);
	while (read(0, &c, 1) > 0)
		write(file, &c, 1);
	close(file);
	if (file < 0)
		return (1);
	else
		return (0);
}

void	exec(int errors, char *path, struct s_map *map)
{
	if (!errors)
		errors = ft_get_map("new.ox", map);
	if (!errors)
	{
		iterate_square(map);
		write_square(path, map);
		print_square(path);
		free(map->graph);
	}
	else
		write(1, "Map error\n", 10);
}

int	main(int ac, char **av)
{
	struct s_map	map;
	int				errors;
	int				i;

	if (ac == 1)
	{
		errors = create_file();
		exec (errors, "new.ox", &map);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			errors = ft_get_map(av[i], &map);
			exec (errors, av[i], &map);
			i++;
		}
	}
}
