/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iteration.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:22:31 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/10 01:22:35 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATION_H
# define ITERATION_H

# include "map.h"

int	find_min_dis(int x1, int x2, int y1, int y2);
int	find_max_dis(int x1, int x2, int y1, int y2);
int	find_max_square(struct s_map *map, int row, int col);
int	iterate_square(struct s_map *map);

#endif
