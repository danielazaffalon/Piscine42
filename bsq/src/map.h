/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 00:40:58 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/10 04:19:41 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

struct s_map
{
	char	empty_c;
	char	obst_c;
	char	full_c;
	int		rows;
	int		cols;
	char	*graph;
	int		pos_row;
	int		pos_col;
	int		max_sq;
};

int	ft_map_size(char *path, char c);
int	ft_atoi(char *str);
int	parse_map_info(int file, char *path, struct s_map *map);
int	ft_get_map(char *path, struct s_map *map);

#endif
