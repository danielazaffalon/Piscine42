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

int	create_file()
{
	int		file;
	char	c;

	file = open("new.ox", O_RDWR | O_CREAT);
	while (read(0, &c, 1) > 0)
		write(file, &c, 1);
	write(file, "\0", 1);
	close(file);
	return(1);
}

int	main(int ac, char **av)
{
	struct s_map	map;
	int				errors;
	int				i;

	i = 0;
	while (i < ac)
	{
		if (ac == 1)
		{
			create_file();
			errors = ft_get_map("new.ox", &map);
		}
		else
		{
			i = 1;
			errors = ft_get_map(av[i], &map);
		}
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
