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

int	main(int ac, char **av)
{
	struct s_map	map;
	int				errors;
	int				i;
	int				file;
	char			c;
	char			cm;

	if(ac == 1)
	{
		file = open("newExample.ox", O_RDWR | O_CREAT);
		while (read(0, &c, 1) > 0 && cm != 'e' && c != 'x')
		{
			write(file, &c, 1);
			cm = c;
		}
		write(1,"error",5);
		close(file);
		//print_square("newExample.ox");
	}
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
