/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:43:09 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/10 05:33:57 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iteration.h"
#include "map.h"
#include "print.h"

int	create_file(struct s_map *map)
{
	int		file;
	char	c;
	int		errors;

	file = open("new.ox", O_RDWR | O_CREAT);
	while (read(0, &c, 1) > 0)
		write(file, &c, 1);
	close(file);
	if(file >= 0)
		errors = ft_get_map("new.ox", &map);
	if (!errors)
	{
		iterate_square(&map);
		write_square("new.ox", &map);
		print_square("new.ox");
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
		errors = create_file(&map);
	else
	{
		i = 1;
		while (i < ac)
		{
			errors = ft_get_map(av[i], &map);
			if (!errors)
			{
				iterate_square(&map);
				write_square(av[i], &map);
				print_square(av[i]);
				free(map.graph);
			}
			else
				write(1, "Map error\n", 10);
			i++;
		}
	}
}
